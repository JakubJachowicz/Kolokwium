void ProtossOpenGnd0 (int player) {
    AIClearStock(player);
 
    AISetStock( player, 1, c_PB_Nexus );
    AISetStock( player, 8, c_PU_Probe );
    AISetStock( player, 1, c_PB_Pylon );
   
    // around 100 resources in about 2 units
    AISetStock( player, 1, c_PU_Zealot );
    ProtossTechUp(player, 1);
   
                if (AIEnableVeryEasyStockOpen(player, c_PU_Probe)) {
                               return;
                }
 
    // around 300 resources in about 3 unit
                AIAddStringInt(player, c_PU_Stalker, 1);
                AIAddStringInt(player, AIPickFrom2(c_PU_Zealot, c_PU_Disruptor), 1);
}