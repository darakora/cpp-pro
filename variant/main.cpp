#include <iostream>
#include <string>
#include <vector>

struct Variant
{
    std::string Text;
    bool is_true;
    bool is_choisen = false;
    Variant() = default;
    Variant(std::string Text_t, bool v):Text(Text_t), is_true(v){}
};

struct Question
{
    std::string Text;
    bool is_choisen = false;
    std::vector<Variant> variates;
    Question() = default;
    Question(std::string Text_t):Text(Text_t){}
    void add_variant (const Variant& v)
    {
        variates.push_back(v);
    }
    void add_variant (Variant&& v)
    {
    variates.push_back(v);
    }
    void choisen_answer(int index)
    {
        variates[index].is_choisen = true;
    }
    bool is_right_answer()
    {
        for(auto i = variates.begin(); i != variates.end(); ++i)
        {
            if(i->is_true != is_choisen)
            {
                return false;
            }
        }
    }
};

struct Quiz
{
    std::vector<Question> questions;
    std::vector<Question>::iterator get_question;
};

int main()
{

    return 0;
}
