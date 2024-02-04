module.exports.loop = function () {
    const AK=Game.spawns.Spawn1;
    for (let name in Game.creeps) {
        //var source = creep.pos.findClosestByPath(FIND_SOURCES);
        var creep = Game.creeps[name];
        if(creep.memory.role=='upgrader'){
            if(creep.store[RESOURCE_ENERGY] < creep.store.getCapacity()){
                 var source = creep.pos.findClosestByPath(FIND_SOURCES);
                if (creep.harvest(source) == ERR_NOT_IN_RANGE) {
                    creep.moveTo(source);
                    //goHarvest(creep);
                }
            }
            else {
                while(creep.store.getCapacity()!=0){
                    if(creep.upgradeController(creep.room.controller) == ERR_NOT_IN_RANGE) {
                        creep.moveTo(creep.room.controller);
                        for (const resourceType in creep.carry) {
                            creep.transfer(creep.room.controller, resourceType);
                        }
                    }
                }
            }
        }
        else if (creep.store[RESOURCE_ENERGY] < creep.store.getCapacity()) {
            var source = creep.pos.findClosestByPath(FIND_SOURCES);
            if (creep.harvest(source) == ERR_NOT_IN_RANGE) {
                creep.moveTo(source);
            }
        }else if(creep.store[RESOURCE_ENERGY] == creep.store.getCapacity()) {
            creep.moveTo(AK);
            for (const resourceType in creep.carry) {
                creep.transfer(AK, resourceType);
            }
        }
    }
}