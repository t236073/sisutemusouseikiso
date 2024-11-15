int main(void)
{
    int cat,dog,lion;
    
    cat=13;   /*猫の人数*/
    dog=7;    /*犬の人数*/
    lion=24;  /*ライオンの人数*/
    
    /*変数と定数の比較*/
    if(cat==13)printf("猫は１３匹います\n");
    if(dog!=7) printf("犬は１３匹もいません\n");
    if(dog<=7) printf("犬は１３匹以下です\n");
    if(lion>24)printf("ライオンは１３匹以上です\n");
    
    /*変数と変数の比較*/
    if(cat<lion) printf("猫はライオンより少ないです\n");
    if(dog<cat)  printf("犬は猫より少ないです\n");
    

    return 0;
}