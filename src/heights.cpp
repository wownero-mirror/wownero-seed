#include <iostream>
#include <map>
#include <string>
#include <string_view>

#include <wownero_seed/heights.hpp>

std::map<unsigned int, unsigned int> heightLookup = {
    {1522624244, 1},
    {1522919763, 1500},
    {1523409727, 3000},
    {1523960364, 4500},
    {1524369547, 6000},
    {1524784400, 7500},
    {1525233663, 9000},
    {1525687037, 10500},
    {1526135584, 12000},
    {1526578718, 13500},
    {1527063859, 15000},
    {1527518523, 16500},
    {1527977555, 18000},
    {1528436212, 19500},
    {1528893646, 21000},
    {1529347707, 22500},
    {1529812899, 24000},
    {1530272289, 25500},
    {1530735091, 27000},
    {1531195321, 28500},
    {1531660804, 30000},
    {1532117133, 31500},
    {1532568099, 33000},
    {1533015693, 34500},
    {1533470854, 36000},
    {1533923432, 37500},
    {1534374443, 39000},
    {1534823621, 40500},
    {1535290349, 42000},
    {1535735446, 43500},
    {1536201310, 45000},
    {1536655339, 46500},
    {1537109771, 48000},
    {1537565159, 49500},
    {1538015344, 51000},
    {1538470517, 52500},
    {1538927269, 54000},
    {1539379855, 55500},
    {1539826869, 57000},
    {1540311781, 58500},
    {1540788117, 60000},
    {1541297876, 61500},
    {1541794302, 63000},
    {1542407858, 64500},
    {1543204218, 66000},
    {1543955252, 67500},
    {1544703247, 69000},
    {1545372024, 70500},
    {1546002226, 72000},
    {1546636335, 73500},
    {1547342810, 75000},
    {1548268561, 76500},
    {1548921502, 78000},
    {1549481994, 79500},
    {1550247894, 81000},
    {1550743647, 82500},
    {1551184199, 84000},
    {1551626083, 85500},
    {1552086272, 87000},
    {1552546202, 88500},
    {1552994646, 90000},
    {1553451645, 91500},
    {1553898976, 93000},
    {1554352300, 94500},
    {1554801655, 96000},
    {1555254551, 97500},
    {1555700170, 99000},
    {1556151520, 100500},
    {1556602014, 102000},
    {1557057709, 103500},
    {1557508808, 105000},
    {1557961787, 106500},
    {1558413175, 108000},
    {1558860703, 109500},
    {1559310651, 111000},
    {1559759587, 112500},
    {1560207825, 114000},
    {1560635185, 115500},
    {1561076902, 117000},
    {1561514633, 118500},
    {1561983210, 120000},
    {1562435722, 121500},
    {1562903313, 123000},
    {1563367656, 124500},
    {1563794760, 126000},
    {1564249987, 127500},
    {1564698967, 129000},
    {1565154467, 130500},
    {1565606876, 132000},
    {1566053072, 133500},
    {1566496455, 135000},
    {1566940483, 136500},
    {1567391114, 138000},
    {1567840593, 139500},
    {1568290979, 141000},
    {1568739494, 142500},
    {1569196321, 144000},
    {1569643702, 145500},
    {1570095074, 147000},
    {1570533207, 148500},
    {1570991907, 150000},
    {1571447301, 151500},
    {1571895478, 153000},
    {1572343106, 154500},
    {1572791579, 156000},
    {1573241814, 157500},
    {1573692641, 159000},
    {1574137867, 160500},
    {1574600312, 162000},
    {1575051207, 163500},
    {1575500955, 165000},
    {1575953057, 166500},
    {1576401859, 168000},
    {1576850419, 169500},
    {1577301553, 171000},
    {1577753392, 172500},
    {1578199780, 174000},
    {1578655276, 175500},
    {1579104342, 177000},
    {1579549362, 178500},
    {1580004525, 180000},
    {1580451365, 181500},
    {1580900062, 183000},
    {1581350016, 184500},
    {1581795609, 186000},
    {1582251322, 187500},
    {1582703447, 189000},
    {1583152160, 190500},
    {1583601824, 192000},
    {1584051198, 193500},
    {1584499159, 195000},
    {1584949547, 196500},
    {1585404000, 198000},
    {1585843662, 199500},
    {1586292852, 201000},
    {1586738236, 202500},
    {1587201986, 204000},
    {1587663936, 205500},
    {1588119101, 207000},
    {1588586510, 208500},
    {1589057972, 210000},
    {1589520509, 211500},
    {1589974638, 213000},
    {1590425544, 214500},
    {1590876865, 216000},
    {1591326399, 217500},
    {1591759684, 219000},
    {1592226165, 220500},
    {1592681388, 222000},
    {1593141896, 223500},
    {1593595859, 225000},
    {1594048319, 226500},
    {1594489197, 228000},
    {1594955184, 229500},
    {1595408732, 231000},
    {1595854685, 232500},
    {1596303095, 234000},
    {1596732814, 235500},
    {1597198383, 237000},
    {1597650820, 238500},
    {1598099448, 240000},
    {1598553007, 241500},
    {1599004645, 243000},
    {1599459515, 244500},
    {1599914532, 246000},
    {1600357718, 247500},
    {1600811447, 249000},
    {1601257433, 250500},
    {1601710572, 252000},
    {1602154921, 253500},
    {1609825674, 279148},
    {1609816860, 279048},
    {1610116800, 280048},
    {1610420700, 281048},
    {1610715120, 282048},
    {1611017160, 283048},
    {1611314940, 284048},
    {1611616080, 285048},
    {1611911760, 286048},
    {1612211940, 287048},
    {1612515660, 288048},
    {1612810500, 289048},
    {1613115540, 290048},
    {1613414820, 291048},
    {1613709300, 292048},
    {1614008280, 293048},
    {1614307380, 294048},
    {1614603060, 295048},
    {1614902280, 296048},
    {1615204740, 297048},
    {1615505100, 298048},
    {1615807020, 299048},
    {1616108820, 300048},
    {1616402280, 301048},
    {1616706720, 302048},
    {1617003960, 303048},
    {1617611100, 305048},
    {1617911640, 306048},
    {1618191900, 307048},
    {1618522560, 308048},
    {1618816620, 309048},
    {1619098740, 310048},
    {1619390520, 311048},
    {1619695500, 312048},
    {1619985120, 313048},
    {1620290220, 314048},
    {1620586260, 315048},
    {1620885360, 316048},
    {1621183620, 317048},
    {1621482300, 318048},
    {1621782840, 319048},
    {1622079960, 320048},
    {1622380260, 321048},
    {1622678460, 322048},
    {1622974380, 323048},
    {1623269760, 324048},
    {1623567420, 325048},
    {1623869820, 326048},
    {1624167180, 327048},
    {1624473000, 328048},
    {1624767600, 329048},
    {1625065980, 330048},
    {1625366940, 331048},
    {1625439000, 332048},
    {1625706420, 333048},
    {1626101160, 334048},
    {1626365940, 335048},
    {1626660360, 336048},
    {1626966840, 337048},
    {1627231740, 338048},
    {1627541700, 339048},
    {1627810440, 340048},
    {1628078820, 341048},
    {1628406780, 342048},
    {1628709420, 343048},
    {1629011100, 344048},
    {1629283260, 345048},
    {1629582540, 346048},
    {1629874620, 347048},
    {1630168440, 348048},
    {1630465980, 349048},
    {1630756800, 350048},
    {1631060460, 351048},
    {1631393400, 352048},
    {1631699460, 353048},
    {1632012480, 354048},
    {1632289920, 355048},
    {1632602820, 356048},
    {1632923220, 357048},
    {1633203180, 358048},
    {1633491000, 359048},
    {1633811400, 360048},
    {1634113140, 361048},
    {1634430300, 362048},
    {1634722260, 363048},
    {1635035460, 364048},
    {1635368760, 365048},
    {1635639660, 366048},
    {1635957840, 367048},
    {1636245240, 368048},
    {1636535820, 369048},
    {1636863900, 370048},
    {1637160360, 371048},
    {1637457780, 372048},
    {1637793240, 373048},
    {1638062460, 374048},
    {1638407580, 375048},
    {1638675240, 376048},
    {1638981360, 377048},
    {1639273140, 378048},
    {1639612740, 379048},
    {1639928760, 380048},
    {1640242500, 381048},
    {1640530620, 382048},
    {1640838000, 383048},
    {1641136800, 384048},
    {1641437400, 385048},
    {1641716040, 386048},
    {1642030680, 387048},
    {1642330500, 388048},
    {1642714260, 389048},
    {1643040360, 390048},
    {1643344560, 391048},
    {1643612040, 392048},
    {1643913360, 393048},
    {1644223920, 394048},
    {1644491820, 395048},
    {1644794760, 396048},
    {1645110660, 397048},
    {1645379400, 398048},
    {1645693500, 399048},
    {1645981080, 400048},
    {1646301360, 401048},
    {1646576220, 402048},
    {1646919420, 403048},
    {1647208320, 404048},
    {1647506640, 405048},
    {1647768840, 406048},
    {1648082520, 407048},
    {1648391700, 408048},
    {1648686240, 409048},
    {1649002860, 410048},
    {1649282820, 411048},
    {1649599860, 412048},
    {1649959980, 413048},
    {1650248280, 414048},
    {1650528840, 415048},
    {1650809340, 416048},
    {1651118280, 417048},
    {1651432260, 418048},
    {1651740360, 419048},
    {1652031600, 420048},
    {1652351400, 421048},
    {1652639520, 422048},
    {1652954640, 423048},
    {1653252600, 424048},
    {1653549840, 425048},
    {1653862740, 426048},
    {1654161060, 427048},
    {1654461900, 428048},
    {1654782600, 429048},
    {1655076960, 430048},
    {1655441820, 431048},
    {1655740500, 432048},
    {1656030240, 433048},
    {1656324720, 434048},
    {1656624060, 435048},
    {1656925920, 436048},
    {1657236840, 437048},
    {1657526700, 438048},
    {1657816740, 439048},
    {1658135940, 440048},
    {1658434440, 441048},
    {1658715780, 442048},
    {1659010080, 443048},
    {1659318120, 444048},
    {1659611040, 445048},
    {1659914940, 446048},
    {1660204260, 447048},
    {1660505220, 448048},
    {1660831740, 449048},
    {1661114940, 450048},
    {1661397720, 451048},
    {1661708760, 452048},
    {1661997180, 453048},
    {1662335640, 454048},
    {1662630120, 455048},
    {1662908820, 456048},
    {1663213380, 457048},
    {1663501140, 458048},
    {1663832400, 459048},
    {1664109480, 460048},
    {1664412600, 461048},
    {1664724720, 462048},
    {1665004620, 463048},
    {1665305460, 464048},
    {1665600480, 465048},
    {1665894960, 466048},
    {1666213620, 467048},
    {1666527600, 468048},
    {1666816380, 469048},
    {1667123160, 470048},
    {1667427180, 471048},
    {1667720640, 472048},
    {1668021000, 473048},
    {1668334740, 474048},
    {1668649440, 475048},
    {1668946680, 476048},
    {1669247100, 477048},
    {1669560960, 478048},
    {1669852800, 479048},
    {1670164020, 480048},
    {1670467860, 481048},
    {1670767440, 482048},
    {1671063480, 483048},
    {1671363960, 484048},
    {1671639900, 485048},
    {1671950940, 486048},
    {1672248180, 487048},
    {1672566480, 488048},
    {1672859400, 489048},
    {1673179080, 490048},
    {1673451120, 491048},
    {1673759520, 492048},
    {1674053100, 493048},
    {1674374100, 494048},
    {1674658440, 495048},
    {1674978420, 496048},
    {1675249380, 497048},
    {1675559460, 498048},
    {1675847160, 499048},
    {1676178900, 500048},
    {1676463600, 501048},
    {1676782680, 502048},
    {1677074640, 503048},
    {1677385020, 504048},
    {1677686160, 505048},
    {1677996420, 506048},
    {1678277700, 507048},
    {1678564680, 508048},
    {1678852920, 509048},
    {1679178960, 510048},
    {1679473500, 511048},
    {1679780220, 512048},
    {1680075120, 513048},
    {1680415620, 514048},
    {1680715500, 515048},
    {1681014240, 516048},
    {1681314240, 517048},
    {1681628940, 518048},
    {1681919940, 519048},
    {1682226660, 520048},
    {1682528460, 521048},
    {1682838000, 522048},
    {1683149040, 523048},
    {1683448680, 524048},
    {1683750540, 525048},
    {1684050540, 526048},
    {1684346940, 527048},
    {1684659780, 528048},
    {1684960560, 529048},
    {1685261880, 530048},
    {1685565420, 531048},
    {1685865660, 532048},
    {1686178020, 533048},
    {1686480060, 534048},
    {1686776820, 535048},
    {1687078860, 536048},
    {1687379580, 537048},
    {1687685100, 538048},
    {1687993320, 539048},
    {1688293380, 540048},
    {1688598420, 541048},
    {1688898120, 542048},
    {1689208500, 543048},
    {1689503940, 544048},
    {1689802800, 545048},
    {1690109040, 546048},
    {1690414320, 547048},
    {1690721280, 548048},
    {1691025480, 549048},
    {1691325720, 550048},
    {1691633940, 551048},
    {1691931480, 552048},
    {1692233280, 553048},
    {1692532620, 554048},
    {1692843420, 555048},
    {1693147020, 556048},
    {1693453140, 557048},
    {1693749540, 558048},
    {1694054460, 559048},
    {1694348940, 560048},
    {1694661120, 561048},
    {1694961240, 562048},
    {1695270600, 563048},
    {1695572880, 564048},
    {1695891600, 565048},
    {1696201200, 566048},
    {1696506300, 567048},
    {1696833360, 568048},
    {1697119860, 569048},
    {1697424660, 570048},
    {1697728620, 571048},
    {1698030720, 572048},
    {1698328680, 573048},
    {1698640800, 574048},
    {1698955800, 575048},
    {1699261560, 576048},
    {1699561560, 577048},
    {1699873800, 578048},
    {1700185680, 579048},
    {1700481900, 580048},
    {1700801820, 581048},
    {1701103860, 582048},
    {1701414900, 583048},
    {1701721080, 584048},
    {1702027260, 585048},
    {1702332300, 586048},
    {1702641960, 587048}
};


unsigned int dateToRestoreHeight(const time_t _t) {
    auto t = static_cast<long int>(_t);
    unsigned int prev = 0;

    for (auto const&item: heightLookup) {
        auto epoch = item.first;
        auto height = item.second;

        if(t <= epoch) {
            if(prev == 0) return 1;
            return heightLookup[prev];
        }

        prev = item.first;
    }

    // height not found in the lookup table, calculate
    auto begin = heightLookup.begin();
    unsigned first_epoch = begin->first;
    unsigned first_height = begin->second;

    unsigned last_epoch = prev;
    unsigned last_height = heightLookup[prev];

    const unsigned secs_per_day = 86400;
    unsigned days = (last_epoch - first_epoch) / secs_per_day;
    unsigned blocks_per_day = last_height / days;
    blocks_per_day = blocks_per_day - 10; // fault tolerance

    unsigned days_delta = (t - last_epoch) / secs_per_day;
    if(days_delta == 0) return last_height;

    unsigned blocks_delta = days_delta * blocks_per_day;
    unsigned calculated_height = last_height + blocks_delta;
    return calculated_height;
}
