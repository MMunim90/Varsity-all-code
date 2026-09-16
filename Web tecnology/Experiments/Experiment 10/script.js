function daysUntilChristmas() {
    const today = new Date();
    const year = today.getFullYear();
    const christmasDate = new Date(year, 11, 25);
    if (today > christmasDate) {
        christmasDate.setFullYear(year + 1);
    }
    
    const timeDiff = christmasDate - today;
    const daysLeft = Math.ceil(timeDiff / (1000 * 60 * 60 * 24)); 
    
    return daysLeft;
}

console.log(`Days until Christmas: ${daysUntilChristmas()}`);
