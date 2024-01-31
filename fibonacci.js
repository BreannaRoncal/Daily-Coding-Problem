function fibonacciGenerator (n) {
    var fibs = [];
    
    if ( n === 1 ){
        fibs = [0];
    }
    else if ( n === 2 ){
        fibs = [0, 1];
    }
    else {
        fibs = [0, 1];
        for ( var i = 2; i < n; i++ ) {
            fibs.push((fibs[i - 2]) + (fibs[i - 1]));
        }
    }
    return fibs;
    
}
