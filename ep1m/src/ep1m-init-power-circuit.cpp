#include    "ep1m.h"

#include    <QDir>

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void EP1m::initPowerCircuit()
{
    for (size_t i = 0; i < pant.size(); ++i)
    {
        pant[i] = new Pantograph();
        pant[i]->read_custom_config(config_dir +
                                    QDir::separator() +
                                    "pantograph");
    }

    main_switch = new ProtectiveDevice();


    trac_trans = new TractionTransformer();

    safety_valve = new ElectroValve();
    safety_valve->read_custom_config(config_dir + QDir::separator() + "vz-6");
    safety_valve->setSoundName("Lock_VVK");

    for (size_t i = 0; i < trac_motor.size(); ++i)
    {
        trac_motor[i] = new TractionMotor();
        trac_motor[i]->read_custom_config(config_dir + QDir::separator() + "nb-520v");
        trac_motor[i]->load_magnetic_char(config_dir + QDir::separator() + "nb-520v.txt");
        trac_motor[i]->load_eff_coeff(config_dir + QDir::separator() + "nb-520v-eff-coeff.txt");
    }
}
