//DEC TO BIN
    vector<int> v;
    // convert to binary representation
    while (n != 0) {
        v.push_back(n % 2);
        n = n / 2;
    }
    reverse(v.begin(), v.end());
//BIN TO DEC
    int two = 1;
    for (int i = v.size() - 1; i >= 0; i--) {
        n = n + v[i] * two;
        two = two * 2;
    }
