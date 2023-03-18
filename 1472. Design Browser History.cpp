class BrowserHistory 
{
public:
    stack<string> mainS,move;
    BrowserHistory(string homepage) 
    {
        mainS.push(homepage);
    }
    
    void visit(string url) 
    {
        while(!move.empty())
            move.pop();
        mainS.push(url);
    }
    
    string back(int steps) 
    {
        while(mainS.size() > 1 && steps>0)
        {
            move.push(mainS.top());
            mainS.pop();
            steps--;
        }
        return mainS.top();    
    }
    
    string forward(int steps) 
    {
        while(steps>0 && !move.empty())
        {
            mainS.push(move.top());
            move.pop();
            steps--;
        }
        return mainS.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
