function solution(board) {
    let answer = board.length * board.length;
    const dangerZone = new Set();
    
    if (board.length === 1 && board[0][0] === 1) {
        answer = 0;
    } else {
        for (let x=0; x < board.length; x++) {
            for (let y=0; y < board.length; y++) {
                if (board[x][y] === 1) {
                    let target_x
                    let target_y

                    if (x-1 < 0) {
                        target_x = [x, x+1];
                    } else if (x+1 >= board.length) {
                        target_x = [x-1, x];
                    } else {
                        target_x = [x-1, x, x+1];
                    }

                    if (y-1 < 0) {
                        target_y = [y, y+1];
                    } else if (y+1 >= board.length) {
                        target_y = [y-1, y];
                    } else {
                        target_y = [y-1, y, y+1];
                    }

                    for (let i of target_x) {
                        for (let j of target_y) {
                            dangerZone.add(JSON.stringify([i, j]));
                        }
                    }
                }
            }
        }
        answer -= dangerZone.size;
    }

    return answer
}