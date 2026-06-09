params ["_color", "_actionData"];

_color = toLower _color;

private _img = switch (_color) do {
    case "red": {
        ["\akt\data\team_red_ca.paa", "#FFFFFF"]
    };
    case "blue": {
        ["\akt\data\team_blue_ca.paa", "#FFFFFF"]
    };
    case "green": {
        ["\akt\data\team_green_ca.paa", "#FFFFFF"]
    };
    case "yellow": {
        ["\akt\data\team_yellow_ca.paa", "#FFFFFF"]
    };
    case "purple": {
        ["\akt\data\team_purple_ca.paa", "#FFFFFF"]
    };
    default {
        ["\z\ace\addons\interaction\UI\team\team_white_ca.paa", (akt_ace_colors getOrDefault [_color, [1, 1, 1, 1]]) call BIS_fnc_colorRGBtoHTML]
    };
};

_actionData set [2, _img];