from copy import copy

'''

Min Max Algorithm for solving Tic Tac Toe

Scores 
x ->    1
O ->   -1
draw -> 0

Max tries to maximize score and make X win
Min tries to minimize score and make O win

Assumption: X plays first 

 1  2  3
 4  5  6
 7  8  9


 The AI is O it will try to minimize the score,
 i.e choose the child with least score

 To calculate score of a child, we need to generate
 all nodes of the child till the leaf nodes and backtrack 
 to find the probabilty of it winning (least score)
'''


def printBoard(board):
    'Function prints the game board'
    for i in range(9):
        
        if board[i] in ['X', 'O']:
            print(board[i], end="")
        else: print(i + 1, end="")

        if i in [0,3,6,1,4,7]:
            print(" | ", end= "")

        if i in [2,5]:
            print("\n---------")
    print()


def putX(board, pos):
    'Function to put X on the board'
    if board[pos-1] == '-':
        board[pos-1] = 'X'
        return True
    else: return False
    

def isFilled(board):
    'Function returns True if the board is filled'
    
    for i in range(9):
        if board[i] == '-':
            return False
    return True 
    

def didWin(board):
    'Function returns True if someone wins else returns False'
    
    if board[:3] in [['X', 'X', 'X'], ['O', 'O', 'O']]:
        return True
    if board[3:6] in [['X', 'X', 'X'], ['O', 'O', 'O']]:
        return True
    if board[6:] in [['X', 'X', 'X'], ['O', 'O', 'O']]:
        return True
    
    if board[0] == board[3] == board[6] == "X" or board[0] == board[3] == board[6] == "O":
        return True
    if board[1] == board[4] == board[7] == "X" or board[1] == board[4] == board[7] == "O":
        return True
    if board[2] == board[5] == board[8] == "X" or board[2] == board[5] == board[8] == "O":
        return True
    
    if board[0] == board[4] == board[8] == "X" or board[0] == board[4] == board[8] == "O":
        return True
    if board[2] == board[4] == board[6] == "X" or board[2] == board[4] == board[6] == "O":
        return True
    
    return False
       
             
def calculateScore(board):
    'Determins who won (or draw) and returns the score (1,-1,0)'
    # NOTE: This only calculates score for a finished board
    
    if board[:3] == ['X', 'X', 'X'] or board[3:6] == ['X', 'X', 'X'] or board[6:] == ['X', 'X', 'X']:
        return 1
    if board[:3] == ['O', 'O', 'O'] or board[3:6] == ['O', 'O', 'O'] or board[6:] == ['O', 'O', 'O']:
        return -1
    
    if board[0] == board[3] == board[6] == "X" or board[1] == board[4] == board[7] == "X" or board[2] == board[5] == board[8] == "X":
        return 1
    if board[0] == board[3] == board[6] == "O" or board[1] == board[4] == board[7] == "O" or board[2] == board[5] == board[8] == "O":
        return -1
    
    if board[0] == board[4] == board[8] == "X" or board[2] == board[4] == board[6] == "X":
        return 1
    if board[0] == board[4] == board[8] == "O" or board[2] == board[4] == board[6] == "O":
        return -1
    
    return 0
    

def minimize(board):
    'Generate all (direct) children and select/apply the child with least score' 

    # Finds all positions the AI can play and plays the position with the least score 
            
    # Generate all children
    all_children = []
    empty_indices = []
    

    for i in range(len(board)):
        if board[i] == '-':
            empty_indices.append(i)
    
    for i in empty_indices:
        new_board = copy(board)
        new_board[i] = 'O'
        all_children.append(new_board)
        
    
    # Calculate score for all children
    scores = []
    
    for child in all_children:
        scores.append(minmax(child, False))
        
    # Find the child with the lowest sore
    
    lowest_score = 9999
    score_index = 0
    
    for i in range(len(scores)):
        if scores[i] < lowest_score:
            lowest_score = scores[i]
            score_index = i
            
    # Play the child with the lowest score
    board[:] = all_children[score_index]

    # You need to modify the list, not the variable that points to it
    # Arguements passed as reference, but references passed by value (a copy of reference is passed)

    # NOTE: empty_indices[score_index] gives the position played
              
    
def minmax(board, isOPlaying):
    'Retruns the score of the node'

    '''
     To do so it generates all possible game plays from the node 
     for both X and O recursively unitl it reaches the leaf nodes 
     (when someone wins or the board is filled)

     Now the backtracking starts,
     It uses the function calculateScore to calculate score of
     the leaf nodes.
     For non leaf nodes, the score is max of thier children if X is playing
     (game plays for X is being explored) or the min of thier children if O
     is playing

    '''
    
    if didWin(board) or isFilled(board):
        return calculateScore(board)
    
    all_children = []
    empty_indices = []
    

    for i in range(len(board)):
        if board[i] == '-':
            empty_indices.append(i)
    
    for i in empty_indices:
        new_board = copy(board)
        if isOPlaying:
            new_board[i] = 'O'
        else: new_board[i] = 'X'
        all_children.append(new_board)    

    
    scores = []
    
    for child in all_children:
        scores.append(minmax(child, not isOPlaying))
        
    if isOPlaying:
        return min(scores)
    else :
        return max(scores)


def main():
    board = ['-','-','-','-','-','-','-','-','-']

    printBoard(board)
    print()

    while not didWin(board) and not isFilled(board):
        print("Player's turn (X)")
        print("Enter the position (1 to 9): ", end=" ")
        n = int(input())
        
        if putX(board,n): 
    
            printBoard(board)
            print()
            print("Computer's turn (O)")
            minimize(board)
            printBoard(board)
            print()

        else: print("Invalid Postion!")

    score = calculateScore(board)
    if score == 1: print("Player (X) Wins!")
    elif score == -1: print("Computer (O) Wins!")
    else: print("Its a Draw!")
    

if __name__ == "__main__":
    main()
