#ifndef _KAREN_HPP_
# define _KAREN_HPP_

# include <string>

class Karen
{
    public:
        Karen();
        ~Karen();
        void    complain(std::string level);
    private:
        static const std::string   DEBUG_MSG = "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
        static const std::string   INFO_MSG = "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
        static const std::string   WARNING_MSG = "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
        static const std::string   ERROR_MSG = "This is unacceptable, I want to speak to the manager now.";
        static const int           DEBUG_INDEX = 0;
        static const int           INFO_INDEX = 1;
        static const int           WARNING_INDEX = 2;
        static const int           ERROR_INDEX = 3;
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void (*const functionArray[])(void) = {
            debug,
            info,
            warning,
            error
        };
};

#endif