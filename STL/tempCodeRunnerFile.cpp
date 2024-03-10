  set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);

    for (auto i: s)
    {
        cout<<i<<endl;
    }

    cout<<endl;
    cout<<"5 ?->" <<s.count(5)<<endl;