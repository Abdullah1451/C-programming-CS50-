{"filter":false,"title":"balp.c","tooltip":"~/workspace/balp.c","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"remove","lines":["    "],"id":485},{"start":{"row":27,"column":0},"end":{"row":27,"column":4},"action":"remove","lines":["    "]}],[{"start":{"row":67,"column":9},"end":{"row":67,"column":12},"action":"remove","lines":["exp"],"id":486},{"start":{"row":67,"column":9},"end":{"row":67,"column":10},"action":"insert","lines":["s"]}],[{"start":{"row":67,"column":10},"end":{"row":67,"column":11},"action":"insert","lines":["t"],"id":487}],[{"start":{"row":67,"column":11},"end":{"row":67,"column":12},"action":"insert","lines":["r"],"id":488}],[{"start":{"row":47,"column":1},"end":{"row":48,"column":0},"action":"insert","lines":["",""],"id":489},{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":16},"action":"remove","lines":["push"],"id":490},{"start":{"row":17,"column":12},"end":{"row":17,"column":18},"action":"insert","lines":["insert"]},{"start":{"row":46,"column":5},"end":{"row":46,"column":9},"action":"remove","lines":["push"]},{"start":{"row":46,"column":5},"end":{"row":46,"column":11},"action":"insert","lines":["insert"]}],[{"start":{"row":23,"column":16},"end":{"row":23,"column":19},"action":"remove","lines":["pop"],"id":491},{"start":{"row":23,"column":16},"end":{"row":23,"column":19},"action":"insert","lines":["rem"]},{"start":{"row":39,"column":5},"end":{"row":39,"column":8},"action":"remove","lines":["pop"]},{"start":{"row":39,"column":5},"end":{"row":39,"column":8},"action":"insert","lines":["rem"]}],[{"start":{"row":47,"column":1},"end":{"row":48,"column":0},"action":"insert","lines":["",""],"id":492},{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":49,"column":0},"end":{"row":49,"column":4},"action":"remove","lines":["    "],"id":493}],[{"start":{"row":48,"column":4},"end":{"row":49,"column":0},"action":"remove","lines":["",""],"id":494}],[{"start":{"row":49,"column":2},"end":{"row":49,"column":4},"action":"insert","lines":["  "],"id":495}],[{"start":{"row":62,"column":2},"end":{"row":62,"column":4},"action":"insert","lines":["  "],"id":497},{"start":{"row":61,"column":0},"end":{"row":61,"column":4},"action":"insert","lines":["    "]},{"start":{"row":60,"column":2},"end":{"row":60,"column":4},"action":"insert","lines":["  "]},{"start":{"row":59,"column":0},"end":{"row":59,"column":4},"action":"insert","lines":["    "]},{"start":{"row":58,"column":2},"end":{"row":58,"column":4},"action":"insert","lines":["  "]},{"start":{"row":57,"column":0},"end":{"row":57,"column":4},"action":"insert","lines":["    "]},{"start":{"row":56,"column":2},"end":{"row":56,"column":4},"action":"insert","lines":["  "]},{"start":{"row":55,"column":2},"end":{"row":55,"column":4},"action":"insert","lines":["  "]},{"start":{"row":54,"column":2},"end":{"row":54,"column":4},"action":"insert","lines":["  "]},{"start":{"row":53,"column":2},"end":{"row":53,"column":4},"action":"insert","lines":["  "]},{"start":{"row":52,"column":2},"end":{"row":52,"column":4},"action":"insert","lines":["  "]},{"start":{"row":51,"column":2},"end":{"row":51,"column":4},"action":"insert","lines":["  "]}],[{"start":{"row":50,"column":0},"end":{"row":50,"column":4},"action":"insert","lines":["    "],"id":498}],[{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"remove","lines":["    "],"id":499},{"start":{"row":50,"column":0},"end":{"row":50,"column":4},"action":"remove","lines":["    "]},{"start":{"row":57,"column":0},"end":{"row":57,"column":4},"action":"remove","lines":["    "]},{"start":{"row":59,"column":0},"end":{"row":59,"column":4},"action":"remove","lines":["    "]},{"start":{"row":61,"column":0},"end":{"row":61,"column":4},"action":"remove","lines":["    "]}],[{"start":{"row":23,"column":16},"end":{"row":23,"column":19},"action":"remove","lines":["rem"],"id":500},{"start":{"row":23,"column":16},"end":{"row":23,"column":19},"action":"insert","lines":["pop"]},{"start":{"row":39,"column":5},"end":{"row":39,"column":8},"action":"remove","lines":["rem"]},{"start":{"row":39,"column":5},"end":{"row":39,"column":8},"action":"insert","lines":["pop"]}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":18},"action":"remove","lines":["insert"],"id":501},{"start":{"row":17,"column":12},"end":{"row":17,"column":16},"action":"insert","lines":["push"]},{"start":{"row":46,"column":5},"end":{"row":46,"column":11},"action":"remove","lines":["insert"]},{"start":{"row":46,"column":5},"end":{"row":46,"column":9},"action":"insert","lines":["push"]}],[{"start":{"row":10,"column":0},"end":{"row":36,"column":1},"action":"remove","lines":["{","    struct node*top=NULL;","","    for(int i=0; i<n; i++)","    {","        if(str[i]=='(' || str[i]=='[' || str[i]=='{')","        {","            push(&top,str[i]);","        }","        else if(str[i]==')' || str[i]==']' || str[i]=='}')","        {","            if(top->a==str[i])","            {","                pop(&top);","            }","        }","    }","","    if(top==NULL)","    {","        printf(\"\\n Balanced \");","    }","    else","    {","        printf(\"\\n Not Balanced \");","    }","}"],"id":502}],[{"start":{"row":38,"column":0},"end":{"row":39,"column":0},"action":"insert","lines":["",""],"id":503}],[{"start":{"row":39,"column":0},"end":{"row":40,"column":0},"action":"insert","lines":["",""],"id":504}],[{"start":{"row":40,"column":0},"end":{"row":41,"column":0},"action":"insert","lines":["",""],"id":505}],[{"start":{"row":41,"column":0},"end":{"row":67,"column":1},"action":"insert","lines":["{","    struct node*top=NULL;","","    for(int i=0; i<n; i++)","    {","        if(str[i]=='(' || str[i]=='[' || str[i]=='{')","        {","            push(&top,str[i]);","        }","        else if(str[i]==')' || str[i]==']' || str[i]=='}')","        {","            if(top->a==str[i])","            {","                pop(&top);","            }","        }","    }","","    if(top==NULL)","    {","        printf(\"\\n Balanced \");","    }","    else","    {","        printf(\"\\n Not Balanced \");","    }","}"],"id":506}],[{"start":{"row":67,"column":1},"end":{"row":68,"column":0},"action":"insert","lines":["",""],"id":507}],[{"start":{"row":68,"column":0},"end":{"row":69,"column":0},"action":"insert","lines":["",""],"id":508}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":31},"action":"remove","lines":["void matching(char str[],int n)"],"id":509}],[{"start":{"row":8,"column":0},"end":{"row":9,"column":0},"action":"remove","lines":["",""],"id":510}],[{"start":{"row":7,"column":2},"end":{"row":8,"column":0},"action":"remove","lines":["",""],"id":511}],[{"start":{"row":38,"column":0},"end":{"row":38,"column":31},"action":"insert","lines":["void matching(char str[],int n)"],"id":512}],[{"start":{"row":61,"column":8},"end":{"row":61,"column":9},"action":"insert","lines":[" "],"id":513}],[{"start":{"row":61,"column":9},"end":{"row":61,"column":10},"action":"insert","lines":["i"],"id":514}],[{"start":{"row":61,"column":10},"end":{"row":61,"column":11},"action":"insert","lines":["f"],"id":515}],[{"start":{"row":61,"column":11},"end":{"row":61,"column":12},"action":"insert","lines":[" "],"id":516}],[{"start":{"row":61,"column":11},"end":{"row":61,"column":12},"action":"remove","lines":[" "],"id":517}],[{"start":{"row":61,"column":11},"end":{"row":61,"column":13},"action":"insert","lines":["()"],"id":518}],[{"start":{"row":61,"column":12},"end":{"row":61,"column":13},"action":"insert","lines":["t"],"id":519}],[{"start":{"row":61,"column":13},"end":{"row":61,"column":14},"action":"insert","lines":["o"],"id":520}],[{"start":{"row":61,"column":14},"end":{"row":61,"column":15},"action":"insert","lines":["p"],"id":521}],[{"start":{"row":61,"column":15},"end":{"row":61,"column":16},"action":"insert","lines":["!"],"id":522}],[{"start":{"row":61,"column":16},"end":{"row":61,"column":17},"action":"insert","lines":["="],"id":523}],[{"start":{"row":61,"column":17},"end":{"row":61,"column":18},"action":"insert","lines":["N"],"id":524}],[{"start":{"row":61,"column":18},"end":{"row":61,"column":19},"action":"insert","lines":["I"],"id":525}],[{"start":{"row":61,"column":18},"end":{"row":61,"column":19},"action":"remove","lines":["I"],"id":526}],[{"start":{"row":61,"column":18},"end":{"row":61,"column":19},"action":"insert","lines":["U"],"id":527}],[{"start":{"row":61,"column":19},"end":{"row":61,"column":20},"action":"insert","lines":["L"],"id":528}],[{"start":{"row":61,"column":20},"end":{"row":61,"column":21},"action":"insert","lines":["L"],"id":529}],[{"start":{"row":50,"column":12},"end":{"row":53,"column":13},"action":"remove","lines":["if(top->a==str[i])","            {","                pop(&top);","            }"],"id":687}],[{"start":{"row":50,"column":12},"end":{"row":55,"column":14},"action":"insert","lines":["if (character1 == '(' && character2 == ')') ","     return 1; ","   else if (character1 == '{' && character2 == '}') ","     return 1; ","   else if (character1 == '[' && character2 == ']') ","     return 1;"],"id":688}],[{"start":{"row":51,"column":2},"end":{"row":51,"column":15},"action":"remove","lines":["   return 1; "],"id":689}],[{"start":{"row":51,"column":1},"end":{"row":51,"column":2},"action":"remove","lines":[" "],"id":690}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":1},"action":"remove","lines":[" "],"id":691}],[{"start":{"row":50,"column":56},"end":{"row":51,"column":0},"action":"remove","lines":["",""],"id":692}],[{"start":{"row":51,"column":3},"end":{"row":51,"column":4},"action":"insert","lines":[" "],"id":693}],[{"start":{"row":51,"column":4},"end":{"row":51,"column":8},"action":"insert","lines":["    "],"id":694}],[{"start":{"row":51,"column":8},"end":{"row":51,"column":12},"action":"insert","lines":["    "],"id":695}],[{"start":{"row":53,"column":3},"end":{"row":53,"column":4},"action":"insert","lines":[" "],"id":696}],[{"start":{"row":53,"column":4},"end":{"row":53,"column":8},"action":"insert","lines":["    "],"id":697}],[{"start":{"row":53,"column":8},"end":{"row":53,"column":12},"action":"insert","lines":["    "],"id":698}],[{"start":{"row":54,"column":5},"end":{"row":54,"column":14},"action":"remove","lines":["return 1;"],"id":699}],[{"start":{"row":54,"column":4},"end":{"row":54,"column":5},"action":"remove","lines":[" "],"id":700}],[{"start":{"row":54,"column":0},"end":{"row":54,"column":4},"action":"remove","lines":["    "],"id":701}],[{"start":{"row":53,"column":61},"end":{"row":54,"column":0},"action":"remove","lines":["",""],"id":702}],[{"start":{"row":52,"column":14},"end":{"row":52,"column":15},"action":"remove","lines":[" "],"id":703}],[{"start":{"row":52,"column":13},"end":{"row":52,"column":14},"action":"remove","lines":[";"],"id":704}],[{"start":{"row":52,"column":12},"end":{"row":52,"column":13},"action":"remove","lines":["1"],"id":705}],[{"start":{"row":52,"column":11},"end":{"row":52,"column":12},"action":"remove","lines":[" "],"id":706}],[{"start":{"row":52,"column":10},"end":{"row":52,"column":11},"action":"remove","lines":["n"],"id":707}],[{"start":{"row":52,"column":9},"end":{"row":52,"column":10},"action":"remove","lines":["r"],"id":708}],[{"start":{"row":52,"column":8},"end":{"row":52,"column":9},"action":"remove","lines":["u"],"id":709}],[{"start":{"row":52,"column":7},"end":{"row":52,"column":8},"action":"remove","lines":["t"],"id":710}],[{"start":{"row":52,"column":6},"end":{"row":52,"column":7},"action":"remove","lines":["e"],"id":711}],[{"start":{"row":52,"column":5},"end":{"row":52,"column":6},"action":"remove","lines":["r"],"id":712}],[{"start":{"row":52,"column":4},"end":{"row":52,"column":5},"action":"remove","lines":[" "],"id":713}],[{"start":{"row":52,"column":0},"end":{"row":52,"column":4},"action":"remove","lines":["    "],"id":714}],[{"start":{"row":51,"column":61},"end":{"row":52,"column":0},"action":"remove","lines":["",""],"id":715}],[{"start":{"row":51,"column":60},"end":{"row":51,"column":61},"action":"remove","lines":[" "],"id":716}],[{"start":{"row":50,"column":55},"end":{"row":50,"column":56},"action":"remove","lines":[" "],"id":717},{"start":{"row":50,"column":55},"end":{"row":51,"column":0},"action":"insert","lines":["",""]},{"start":{"row":51,"column":0},"end":{"row":51,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":51,"column":12},"end":{"row":51,"column":13},"action":"insert","lines":["{"],"id":720}],[{"start":{"row":51,"column":13},"end":{"row":53,"column":13},"action":"insert","lines":["","                ","            }"],"id":721}],[{"start":{"row":50,"column":16},"end":{"row":50,"column":26},"action":"remove","lines":["character1"],"id":726},{"start":{"row":50,"column":16},"end":{"row":50,"column":22},"action":"insert","lines":["top->a"]},{"start":{"row":54,"column":21},"end":{"row":54,"column":31},"action":"remove","lines":["character1"]},{"start":{"row":54,"column":21},"end":{"row":54,"column":27},"action":"insert","lines":["top->a"]},{"start":{"row":55,"column":21},"end":{"row":55,"column":31},"action":"remove","lines":["character1"]},{"start":{"row":55,"column":21},"end":{"row":55,"column":27},"action":"insert","lines":["top->a"]}],[{"start":{"row":50,"column":33},"end":{"row":50,"column":43},"action":"remove","lines":["character2"],"id":727},{"start":{"row":50,"column":33},"end":{"row":50,"column":39},"action":"insert","lines":["str[i]"]},{"start":{"row":54,"column":38},"end":{"row":54,"column":48},"action":"remove","lines":["character2"]},{"start":{"row":54,"column":38},"end":{"row":54,"column":44},"action":"insert","lines":["str[i]"]},{"start":{"row":55,"column":38},"end":{"row":55,"column":48},"action":"remove","lines":["character2"]},{"start":{"row":55,"column":38},"end":{"row":55,"column":44},"action":"insert","lines":["str[i]"]}],[{"start":{"row":52,"column":16},"end":{"row":52,"column":17},"action":"insert","lines":["p"],"id":728}],[{"start":{"row":52,"column":17},"end":{"row":52,"column":18},"action":"insert","lines":["o"],"id":729}],[{"start":{"row":52,"column":18},"end":{"row":52,"column":19},"action":"insert","lines":["p"],"id":730}],[{"start":{"row":52,"column":19},"end":{"row":52,"column":21},"action":"insert","lines":["()"],"id":731}],[{"start":{"row":52,"column":20},"end":{"row":52,"column":21},"action":"insert","lines":["&"],"id":732}],[{"start":{"row":52,"column":21},"end":{"row":52,"column":22},"action":"insert","lines":["t"],"id":733}],[{"start":{"row":52,"column":22},"end":{"row":52,"column":23},"action":"insert","lines":["o"],"id":734}],[{"start":{"row":52,"column":23},"end":{"row":52,"column":24},"action":"insert","lines":["p"],"id":735}],[{"start":{"row":52,"column":25},"end":{"row":52,"column":26},"action":"insert","lines":[";"],"id":736}],[{"start":{"row":54,"column":52},"end":{"row":55,"column":0},"action":"insert","lines":["",""],"id":737},{"start":{"row":55,"column":0},"end":{"row":55,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":55,"column":12},"end":{"row":55,"column":13},"action":"insert","lines":["{"],"id":738}],[{"start":{"row":55,"column":13},"end":{"row":57,"column":13},"action":"insert","lines":["","                ","            }"],"id":739}],[{"start":{"row":58,"column":52},"end":{"row":58,"column":53},"action":"remove","lines":[" "],"id":740},{"start":{"row":58,"column":52},"end":{"row":59,"column":0},"action":"insert","lines":["",""]},{"start":{"row":59,"column":0},"end":{"row":59,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":59,"column":12},"end":{"row":59,"column":13},"action":"insert","lines":["{"],"id":741}],[{"start":{"row":59,"column":13},"end":{"row":61,"column":13},"action":"insert","lines":["","                ","            }"],"id":742}],[{"start":{"row":56,"column":16},"end":{"row":56,"column":26},"action":"insert","lines":["pop(&top);"],"id":743}],[{"start":{"row":60,"column":16},"end":{"row":60,"column":26},"action":"insert","lines":["pop(&top);"],"id":744}],[{"start":{"row":79,"column":24},"end":{"row":79,"column":25},"action":"remove","lines":["}"],"id":745}],[{"start":{"row":79,"column":26},"end":{"row":79,"column":27},"action":"insert","lines":["}"],"id":751}],[{"start":{"row":23,"column":4},"end":{"row":28,"column":5},"action":"remove","lines":["if (newNode == NULL)","    {","       printf(\"Stack overflow\");","       getchar();","       exit(0);","    }"],"id":752}],[{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"remove","lines":["    "],"id":753}],[{"start":{"row":74,"column":25},"end":{"row":74,"column":26},"action":"remove","lines":["]"],"id":754}]]},"ace":{"folds":[],"scrolltop":1244,"scrollleft":0,"selection":{"start":{"row":77,"column":1},"end":{"row":77,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":68,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1545149221723,"hash":"31496451ee469d8bd7f7a1d21c615278be158c07"}