#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy {
    private: 
    
    public:
        virtual void engage() = 0;
        virtual ~BattleStrategy() = default;
};

#endif /* BATTLESTRATEGY_H */