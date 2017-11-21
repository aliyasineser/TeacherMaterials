import sys
import os

# Prints the board to the terminal
def printBoard(board):
    # print the 2D Array
    for row in range(0,board.__len__()):
        for column in range(0,board.__len__()):
            print(board[row][column], end=' ')
        print("")
    return

# Plays the move for the player.
def playTurn(board, playerSymbol, row, column):
    # playerSymbol -> X or O
    # row and column is the position coordinates
    
    if(board[row][column] != '.'):
        return False
    else:
        board[row][column] = playerSymbol
        return True

# Checks the board. If there is at least one empty tile, returns true.
def isStillEmpty(board ):
    for row in range(0,board.__len__()):
        for column in range(0,board.__len__()):
           if(board[row][column] == '.'):
               return True 

# Checks if the game is over or not
def isOver(board, symbol):
    isThereEmpty = isStillEmpty(board)
    if(isThereEmpty): # Take a deep breathe and search for all possibilities
        if((board[0][0] == symbol and board[0][1] == symbol and board[0][2] == symbol) or
            (board[1][0] == symbol and board[1][1] == symbol and board[1][2] == symbol) or
            (board[2][0] == symbol and board[2][1] == symbol and board[2][2] == symbol) or 

            (board[0][0] == symbol and board[1][0] == symbol and board[2][0] == symbol) or 
            (board[0][1] == symbol and board[1][1] == symbol and board[2][1] == symbol) or 
            (board[0][2] == symbol and board[1][2] == symbol and board[2][2] == symbol) or 

            (board[0][0] == symbol and board[1][1] == symbol and board[2][2] == symbol) or 
            (board[0][2] == symbol and board[1][1] == symbol and board[2][0] == symbol)):
            return True            

    return False 

# Game from the beginning
def Main():
    # all the game and I/O operation will be here
    board =  [['.','.','.'],['.','.','.'],['.','.','.']]
    symbols = ['X', 'O']
    turn=0

    # while loop for the game
    while(isStillEmpty(board)):
        # print the board as info
        printBoard(board)
        print("It's " + symbols[turn%2] + "'s turn.")
        # restart 
        rowInfo = -1
        columnInfo = -1   
        did_play = False
        
        rowInfo = int(input("Please enter row (between 0-2):"))
        while( rowInfo < 0  or  rowInfo > 2):
            rowInfo = int(input("Please enter row (between 0-2):"))

        columnInfo = int(input("Please enter column (between 0-2):"))
        while(columnInfo < 0  or  columnInfo > 2):
            columnInfo = int(input("Please enter column (between 0-2):"))

        did_play = playTurn(board, symbols[turn%2], rowInfo, columnInfo)

        if(isOver(board, symbols[turn%2])):
            printBoard(board)
            print("Player " + symbols[turn%2] + " wins.")
            return 
        elif(did_play):
            turn+=1
        else:
            print("Filled position. Player " + symbols[turn%2] + ", play again.")
    print("Draw")    
    
    return

# Saves the game  
def saveGame(board, turn, filename):
    optr = open(filename, 'w')
    optr.write(turn + "\n")
    for i in range(0,len(board)):
        for j in range(0,len(board)):
            optr.write( board[i][j] + " " )
        optr.write("\n")
    return

# Loads the game
def loadGame(board, filePath):
    iptr = open(filePath, 'r')
    turn = iptr.readline().strip()
    for i in range(0,len(board)):
        index = 0
        line = iptr.readline().strip()
        for j in line.split(' '):
            board[i][index] = j
            index += 1
    return 


Main()
