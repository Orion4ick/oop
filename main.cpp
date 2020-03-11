#include <iostream>
#include "Unit/Unit.h"
#include "Field.h"
#include "Unit/UnitCreater.h"

#include "Unit/Tank.h"
#include "Unit/ArmoredCar.h"
#include "Unit/Rifleman.h"

#include "Base.h"
//-------------------------------
int main() {

    Field* field= new Field(7, 7, 10);

    Unit *tank = new Tank(2, 2);
    Unit *armoredCar = new ArmoredCar(3, 3);
    Unit *rifleman = new Rifleman(3, 5);


//    TankCreater tc;
//    Unit* tank = tc.create(2,2);
//
//    ArmoredCarCreater acc;
//    Unit* armoredCar = acc.create(3,3);

    field->addUnit(tank);
    field->addUnit(armoredCar);
    field->addUnit(rifleman);
    field->print();

    field->moveUnit(tank, tank->getx()+1, tank->gety());
    field->moveUnit(tank, tank->getx()+1, tank->gety());
    field->moveUnit(armoredCar, armoredCar->getx(), armoredCar->gety()+1);
    field->moveUnit(rifleman, rifleman->getx()-1, rifleman->gety());
    //field->removeUnit(rifleman);
    field->print();

    Base *base = field->createBase(2,3, 5, 100);
    base->createUnit('C');
    base->createUnit('T');
    base->createUnit('M');
    base->createUnit('S');

    field->print();
    field->printBaseInfo();
    
    

    return 0;
}
