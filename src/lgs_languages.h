

#pragma once


// Forward declarations
void update_time();


// This works around the inability to use the current GRect macro for constants
#define ConstantGRect(x, y, w, h) {{(x), (y)}, {(w), (h)}}


// Day line information
static const char *day_lines[] = { "Mo  Tu  We  Th  Fr  Sa  Su"
                                 , "Ma  Di  Wo  Do  Vr  Za  Zo"
                                 , "Mo  Di  Mi  Do  Fr  Sa  So"
                                 , "Lu  Ma  Me  Je  Ve  Sa  Di"
                                 , "Po  Vt  Sr  Ce  Pe  Su  Ne"
                                 , "Lu  Ma  Mi  Ju  Vi  Sá  Do"
                                 , "Lu  Ma  Me  Gi  Ve  Sa  Do"
                                 , "Ma  Ti  On  To  Fr  Lø  Sø"
                                 , "Ma  Ti  Ke  To  Pe  La  Su"
                                 };


// GRect for day highlights
static const GRect highlight_rect[][7] = { { ConstantGRect( 16, 96, 18, 24 ) , ConstantGRect( 37, 96, 15, 24 ) , ConstantGRect( 54, 96, 19, 24 ) , ConstantGRect( 75, 96, 15, 24 ) , ConstantGRect( 94, 96, 14, 24 ) , ConstantGRect( 108, 96, 16, 24 ) , ConstantGRect( 126, 96, 17, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 37, 96, 13, 24 ) , ConstantGRect( 52, 96, 18, 24 ) , ConstantGRect( 73, 96, 15, 24 ) , ConstantGRect( 93, 96, 15, 24 ) , ConstantGRect( 110, 96, 14, 24 ) , ConstantGRect( 124, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 37, 96, 14, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 90, 96, 14, 24 ) , ConstantGRect(  105, 96, 14, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 16, 24 ) , ConstantGRect( 52, 96, 17, 24 ) , ConstantGRect( 73, 96, 15, 24 ) , ConstantGRect( 91, 96, 15, 24 ) , ConstantGRect( 109, 96, 15, 24 ) , ConstantGRect( 126, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 13, 24 ) , ConstantGRect( 50, 96, 14, 24 ) , ConstantGRect( 67, 96, 15, 24 ) , ConstantGRect( 85, 96, 15, 24 ) , ConstantGRect(  101, 96, 14, 24 ) , ConstantGRect( 118, 96, 18, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 16, 24 ) , ConstantGRect( 53, 96, 15, 24 ) , ConstantGRect( 71, 96, 15, 24 ) , ConstantGRect( 88, 96, 14, 24 ) , ConstantGRect(  103, 96, 15, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 33, 96, 16, 24 ) , ConstantGRect( 53, 96, 18, 24 ) , ConstantGRect( 74, 96, 12, 24 ) , ConstantGRect( 88, 96, 15, 24 ) , ConstantGRect( 106, 96, 15, 24 ) , ConstantGRect( 124, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 87, 96, 14, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 120, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         };


// Month names
static const char *month_names_arr[][12] = { { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" }
                                           , { "jan", "feb", "mrt", "apr", "mei", "jun", "jul", "aug", "sep", "okt", "nov", "dec" }
                                           , { "Jan", "Feb", "März", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dez" }
                                           , { "janv", "févr", "mars", "avr", "mai", "juin", "juil", "août", "sept", "oct", "nov", "déc" }
                                           , { "sije..", "velja..", "ožuj..", "trava..", "svib..", "lipa..", "srpa..", "kolo..", "ruja..", "list..", "stud..", "pros.." }
                                           , { "enero", "feb", "marzo", "abr", "mayo", "jun", "jul", "agosto", "sept", "oct", "nov", "dic" }
                                           , { "genn", "febbr", "mar", "apr", "magg", "giug..", "lugl..", "ag", "sett", "ott", "nov", "dic" }
                                           , { "Jan", "Feb", "Mar", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Des" }
                                           , { "tamm..", "helmi..", "maali..", "huhti..", "touk..", "kesä..", "hein..", "elok..", "syys..", "loka..", "marr..", "joul.." }
                                           };


// Format week
static const char *week_formats[] = { "Week %V"
                                    , "Week %V"
                                    , "Woche %V"
                                    , "Semaine %V"
                                    , "%V. tjedan"
                                    , "%V. semana"
                                    , "%V. Setti."
                                    , "Uke %V"
                                    , "VKO %V"
                                    };


// Format date
static const char *date_formats[] = { "%b %e"
                                    , "%e "
                                    , "%e. "
                                    , "%e "
                                    , "%e. "
                                    , "%e. "
                                    , "%e. "
                                    , "%e. "
                                    , "%e. "
                                    };


// Formats for second line
static const char *alt_formats[] = { "Week %V"
                                   , "%Y.%j"
                                   , "%d/%m/%y"
                                   , "%m/%d/%y"
                                   , "W%V D%j"
								   , "%Y %m %d"
                                   };


static char week_text[] = "               ";
static char date_text[] = "               ";
static char alt_text[]  = "               ";


// Ordinal numbers
static const char *ordinal_numbers[] = { "st", "nd", "rd", "th", "th", "th", "th", "th", "th", "th"
                                       , "th", "th", "th", "th", "th", "th", "th", "th", "th", "th"
                                       , "st", "nd", "rd", "th", "th", "th", "th", "th", "th", "th"
                                       , "st" };