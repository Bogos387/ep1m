#include    "ep1m.h"

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void EP1m::initAirSupplySystem()
{
    // Главный резервуар объемом 1020 литров
    main_res = new Reservoir(1.02);
    main_res->setFlowCoeff(main_res_leak);


}
