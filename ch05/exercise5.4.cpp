a) 不合法声明 改为
string::iterator iter = s.begin();
while(iter != s.end){}

b) 改为
while(bool status = find(word)){
    if(!status){

    }
}
