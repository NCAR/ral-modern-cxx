//
// Created by Paul Prestopnik on 1/31/22.
//

class widget {
    int i;
};

widget make_widget(){

    return widget();
}

widget& make_widget2(){

    widget w;
    return w;
}

widget& make_widget_ref(){

    return widget();
}


int main(){

    widget w1 = make_widget();
    widget w2 = make_widget_ref();

}