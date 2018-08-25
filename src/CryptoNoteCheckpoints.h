// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{0,"877e55b4e902b9bf4c9e0a7c16440f449339d56679c49d62261ae5c92596a6ce"},
{500,"8a7d72e82fa4104cd3fa00349e84148d7948a007ac2f62d53507d8939e8e0fea"},
{1000,"c9e495bff601f44e4ca60ce4d00d485ad8bd2667a6aef75d70d8416d38a99cda"},
{1500,"c4266151fa3bff7f0dea202dfe5543183c92a036246c6de5b05fda08c80cd99f"},
{2000,"57abdcc64975e704c0fcf26100d1f68a60cabea02e5fb0ec57c3658662f77869"},
{2500,"df90e532333253d89d50976689cf662e41d4595d32318917475b8c9266b8242b"},
{3000,"651be4161f06a96eedae077c6b05af879c7b8d8ff72312c81b519ee10375dd74"},
{3500,"a46e1da427eed90e16903fb652947350e6bb1174c338875191721da30d368476"},
{4000,"563c0d3b745836f214d5cee483b25e7a3e978b4dae4e4b464b956afed3d3f032"},
{4500,"25594abff3e3ec5f45988fa378126f68776009c5ea3b50a6915c8d5803eea56b"},
{5000,"a17de196aaf1fd574bddd58ccb8c167bff3d549a00f5d8c5da1b459bbedbcc51"},
{5500,"4562946aaa0274b20de935970a52ce5f88544cf286a21f6bd9fca05ad51515d8"},
{6000,"1962ffb8a45716e1ad0af0fd593ed739f6b222bd9f0df833ebe90fc6abb57427"},
{6500,"cab54b2732f673a9616826d00a63dbb10ed21509682da8b181c5a3430f9a196b"},
{7000,"1a554b0534a4afe3ad86793542a5e3717d907282c8b115ddb4f1c773d4cdbb30"},
{7500,"ba28f0b65f8aa438f7e3fb58d0c20c6a0d1ac78b9df221383e14b1d46927cccc"},
{8000,"80991425d3dda0c6d159a72eaabe726b30c03dfdec4657568b2c274b6bcd3a60"},
{8500,"a446eac98ea442162a0d273b114aaa8614557641a392eeb7473dcd8dae2f60f0"},
{9000,"adc6adc88de77daba831fabdbe11b87c00880ad04b662dd84c112a18c03e857f"},
{9500,"37d7f49bd233cfab62a9ad244f666f404f724f11969e4b7f2e8c63e708c32fef"},
{10000,"2c99b62958b0e05804249bab026847b8f7f5b01c925122db3ec198cff10590d1"},
{10500,"c4f73b77708c964ee92b3fd7e6cdbe4934ad10e1fdd944c41f29bc6aec96f7be"},
{11000,"5e844d328dd708ffe616ae9f0a88469303bb9505da66d81e6682f6e7d0c760c7"},
{11500,"44f649bafd3bde867775ea077513c48718865b39d0406cee1ecf3c3fb62f0916"},
{12000,"382b5545090e26ba702b83806afb2ba95a8845c3b4a9b4bb5509f2afa3f82aae"},
{12500,"b2885a5260c52aa6275f4e94d7ca5d23492de81062be57e4e8bef394a0d6af3b"},
{13000,"cb706499b175e49fb4fa50706c1c7dc8cd60a1cf602fb852ba00807a11205a31"},
{13500,"2eb97921736b70e16a2fd8f749d23b69604d8c2e50130ee944137cb677605719"},
{14000,"e7af87ad0b4605dcd57807eecc50c3d1f69c1f6c21d2da08b1f035f66a540f89"},
{14500,"ea92adc9b9467aef7f89f07b3523fedf989b9767e8177adfc9af85751899e89d"},
{15000,"74c0c3695d4a7305d6577f80ba4790500fe324689d59b0fae7022180098a21d1"},
{15500,"f7cd23485bc20c43922157c0b7154b740b992933eeb109dfa6d01a14cc8c98e3"},
{16000,"876aef492c0b1bbae4f6a5c27bb3de5b918bd6c22a5db54e1adaf19b7bbcb631"},
{16500,"0e7ba282a5789b402c41ebf44a10af7cc4a9c4364e0f3df300213da2814da0f5"},
{17000,"8e2e4464182b7001a5dd2577d333faa9c6838f6d7abec69ea8571a32aae30253"},
{17500,"c23e475d4b482042b07276855afc27563dc3267f70be444e73c0a4718a058ee2"},
{18000,"08df66d35a8e537b467d7c030bdefcd397a9025715807bb8235bce221c150033"},
{18500,"d90257a746655bcb91ac2f363e15c3db35250e96b658653e6f203ec645e6c691"},
{19000,"1d2a4ba2991b4bcfcea4984094a398fe6895c90a943184f0a1f0852ff2b3fca7"},
{19500,"f2133ed82971243a80a5bf9678ab46af493b6a317ff49a436d48ed6c4776571c"},
{20000,"72790e675dd68ac369af99058b962169a22c19308e783b9045a2071f292ef09d"},
{20500,"677c8a81f078903ad80a795cc4b785014492451c2f817ca1543859384882bbd3"},
{21000,"f0ee9c1724bbde155bac7f9d5f290eda64fc4202f26243b643d46323fc55618d"},
{21500,"09561b74b76cd71f0ad59ecb36e97e4942dbb1f8f01f1807b1c45821df3ef906"},
{22000,"07ba82ca8a0ce58689df2a39e4e4699ec43fab91112fd0fb54609c2feef12b54"},
{22500,"2ded7e8210ac4497737f351cb4b72bb3696c837c51a5bca4aa167a3aae7b1aea"},
{23000,"9e3910180614c1eecbdc13947b43735734ededd10b2554500d13027420449136"},
{23500,"8b553df3db87fe26ab58974c80a75d4e51afe1721884dbf34bf7575dd9451e4f"},
{24000,"7456869e7b67cc126db204f2318a07a9acc778d55a1f12952e8c88d5d4e13935"},
{24500,"3bf8757b18448440c9de5cafb37fef9e9dd624dbb1c047a24e6a05aabb0e0d81"},
{25000,"80ce89f332f1437c7eb3ec82aff3762aa1ce468cc80feb6c40f5490bb7d2c2bc"},
{25500,"dcca9ea905807fbf2e9792dc7d6673d3e484225bf8f7e2b2041624fcd570ef54"},
{26000,"b1d396aa8f42179720bab3dae3c212bfcc1f67e98f4da7bf95b082a66e47ce5e"},
{26500,"9f84fb2e76c39514560202a8cce65526d431dbe19ff8e4f62cfa16e8f1cc7dfc"},
{27000,"31d7d59eca8fff2906651d2ade5f637cb3012679d5b713a3078343a568f3f238"},
{27500,"cf49e97cf1a26e2c1f29341d23fa2ef59214f23d30b0337e58b3c95b1a90c3e1"},
{28000,"2be22ec9c0e9add57d83daa910b9f12fd492195e3521c4b8dc247b494f4b1dcc"},
{28500,"a90794c17e75ed2de4df303a6c1ca3f1c7b3c3608702428cf3ad0b20b1e5b2a6"},
{29000,"0b215b0b15e9edea2cd60a7644ee79b2f34e994446369c0b810935a7a6071dec"},
{29500,"86f4c2e463f1636da732c925c939867522cc6af035f7dc353a7dc257b1dad83c"},
{30000,"7285e80545b1fdaf88baa0a36a870946d3b614b67d33a7c2459f38dbb323b8d6"},
{30500,"e79eff0b9abe44836db67816b83630ac8d047a65050e30cae1fda5201115e525"},
{31000,"5bcf66ae338af1af8fa22e11387dd018b951b79932b9f5df0d5ea714097803a2"},
{31500,"d0e5f77e8e5347cbc55c83afaf7468ec1d220438289ccd1f45c162b3d9b473a2"},
{32000,"58253dddf5f3f2189eefcd1160f4d69298b392505e28a3803399e533401a5311"},
{32500,"94cf7ea8a10369f970a896219aad043776dd60f0c5fadb5d8d93946c03f92598"},
{33000,"a3883d31271caadb1454b308a7338713e554d53ebdcb9a0760ef025ad5b45075"},
{33500,"79526082630f8d742c11ea1d76eaaee21dbeb7bfa827e0edcf564670890a6ad5"},
{34000,"c2434a82aaaf3e35193409975edfca803a235dcae044c764e77fc6fa25113f0d"},
{34500,"180c1eb46562bd87c8d25caa350d5f79ce2438376a6a976e183352fe26a4cf9a"},
{35000,"e078b2ac10c23de9346b908751a1826ebd63e4323eaefd6da0ea8fcf07867ad5"},
{35500,"78056027318023e147840c1ca8b7edf3694600a76e7cbbed6a65275aa32620b6"},
{36000,"9496c62569d93490a00561a6df93627fa118d388d9d1cac4f2033adef605db92"},
{36500,"e8645889446a3d7da5bda97aef22063088442c40a710be4ba3ebd534bd2bbffb"},
{37000,"efc3c0f0e1fba96eb7aba61677bf9b238070870673a5855b47556c52f8220f4b"},
{37500,"3c4c3bcf06cc88ec08c82e41fa0a0479d87b4b53741b122736ded03284682737"},
{38000,"19bc317878914cdedc5a6a3dd1d89956d4a0c0793391f6861c055d4d712de335"},
{38500,"ec95904545cd3b66cd2bc011c2f4a59aff587e56e783bf28273bd4a055a8f051"},
{39000,"96b96c84ea5f85e74a6394a09318ea646126b5d27741b7afd38f5ff3353bf262"},
{39500,"5fec4bbac60b53af1fce20eab2471c26fe4445274720707ab57b71bb781673ba"},
{40000,"3b9418425260a9b8117c75bf915fa4bc3db27129f4ad100855b3333fb4ae5bd2"},
{40500,"4c8e2e9c91ac1be3aed9e2da4a2f875a722ee204176d5ad032a6c555ba0d7f82"},
{41000,"5c1c7c2ddfedc618137a4f7cfef55fea6934b5fe6d75f9e050dc7986253d9e76"},
{41500,"daff2c990d8810afe8fd09652d0540a9945211be8a86966f128381cde84f51d9"},
{42000,"ac02beadab5dbf3fa0366c739b7840a071428cad694c1b8a837eb4001880cb26"},
{42500,"5f20bf3cc5349432d9dba12ee8ccb8ccfd3c75f6d6d19d943efabd6a0ed2cd31"},
{43000,"3798444542d8cca911de4dbb26bb312c2645121c61e415116c390b2042aeb494"},
{43500,"4b5c248a47e61e39a5671acc466f8063a5069cc84fa2b7eda5a41ef4b85b6dff"},
{44000,"fb71a34b07e5deb7983b1fd9cdc080560c4aeb92f303a644d2f4ea369e92565b"},
{44500,"eebbb13efa2d4146045c65365c03e2248938b008810421483c9937751606b1b6"},
{45000,"94093218fb89b9ed7eef75b79f49e6d5bed9ca100a172a604d46d9cff4821595"},
{45500,"513e81959ff4164d8286dd43c37d83db6616aeec56586af016661f4201bc5ac0"},
{46000,"4edf4494cfd7ebede6ccdfde570c73391b728206d390ba5d9e68b2080eebee55"},
{46500,"9b27d17a453101bc958cedb6239a586dcc8af8dc4785f7aa6b5d424885855416"},
{47000,"cc540bef696467bc27ac8c2977c42c5a9dce4695222376fb0459161f4365ba32"},
{47500,"cb44c25bfe6247481785b9d6b247e40eb685bed46525a3a0cc782ed543f5ed92"},
{48000,"1afd53046709254520f90e4f2cb94e69c8bde596c7958f03fa595f03ab73d527"},
{48500,"80229063155333df4c18b893fe71e9ee60db4421f681856fb1ea8dc2979197b9"},
{49000,"6d08abc0a13bd2113f3a1708a916042f70f88570ce1156976e4aabf1a75b8388"},
{49500,"95271cd4b9d103a348af01cd742b37eed205e220328857d3682d77222cf56c82"},
{50000,"6dded54823e3302035f4044b29fc302971df36a86c13ce51a8882a9c9e953b68"},
{50500,"f7b31429a7d01668a5a3fdd4738f8177e92a05e268a60b90b6c4baff13232fe3"},
{51000,"73eb41ed2545fb0cd2e9e82015f54da254d9f21093201d63a6d09a2c32b41a2a"},
{51500,"173897e96915a14f231778230895bfab9172bc82bdb93b02e14374f38abe70d2"},
{52000,"be084fa3b4f3cada9a037660f4bb2f480a6772c568bfc26b330868a04af4d8ee"},
{52500,"3ac4f6e831db86499e70af67ccf0215010c7e6ec0e10aed426b4f74206e126b4"},
{53000,"94488fab1f46daef70c985326660233ecb4e1ea959fb2591d362c984a9ded32d"},
{53500,"132d76cd8e367cb5473740943cc9f7198c8af30fbec2dc06a80cd7a1e7ab82af"},
{54000,"88c13682d9e5a90cee5f4801ac1f92e13eb78e43ed11cba9e5a2451f91681c49"},
{54500,"f464ccacf04f28ba06f6d388b8641acda6248631fa3b0e8866ec457ab58dddaa"},
{55000,"f809319dc873beced66941f185de2f42585f53fdeb030aa473f55f19549a7bec"},
{55500,"e46fc996d20881261127652f78374edab9983f6a7709747ad40d9cfd20be50c2"},
{56000,"ef915907314196110680766807e1f993dffb3993b58b3e034b882bf6cd3ab2f5"},
{56500,"e6655db77fff8cbb5d727055c725f2bd98d6385c802e698edf30d9653a1ac965"},
{57000,"808cf7d9f203614352f6d1af05377c8160137be8d8ce74b2bdb94270aab28ad8"},
{57500,"71604fd77bd9c4ea1def3860f012b217a504affa4198c0b77f837c8cff2c0809"},
{58000,"ea1b6ead70eaba237396658d3df82a54824d60bcee9fba91f81e498f1ba819d2"},
{58500,"509ed76a272db13ee298de7088f868a00dc99f70e8fecfdb105a45e87d74a41f"},
{59000,"5df7e695946538795ac81eda555736c26f88b7dc2162a3b6b1af160f29ee61ce"},
{59500,"7f7e645ae7000a51a7ef855981cd0bdd3246efa799d303cb733a33ee28bbd0b9"},
{60000,"917d92d59b4ea2f60f046666cf36bf90fa1df871aebf8ff3b164cd6f62869499"},
{60500,"26654bc4f1acfed98607c1f65f1be7cadf701c29ffb53766b847ac3766b5c5fe"},
{61000,"83781ff5949aa55987608e375a6b6362000c3a901bafa6229d6c816c28cc3720"},
{61500,"8b23a506854542ac0825d92a658622ae24fc0f55b6993b937a2379267e6a87a8"},
{62000,"be197fd0038cdf0c3fad7bf1b17972061c602565b08f4df3875357eee0964d42"},
{62500,"0d5f11fc7dd3682b84b6e4afb66585637f03e89f9a204fe54be72b86c413ccfc"},
{63000,"6f7225ffb3db14ae5706b343ef44d2ef9a1f9c379b21a0d0f380f5b3df000ce0"},
{63500,"6e935f62c60cb36e2f96689983bea56fa6b1f66008d91533b775e73f58a2978c"},
{64000,"f669bf1522dfdb292bac0a229c672458929256633a280087b6ada485a4409181"},
{64500,"909a63563a36f880d4671e8de683f6f9b09d0fc7e0fb3485294ffdaf32e97786"},
{65000,"7ecaa8bafe4f91aeda9f2f3eb8a4fb3868af65607f06ad283c67889520fd798c"},
{65500,"92366545bf44b26abbb7f2c1daeae559fab6eb246721d653ddb02a8a494c5cd5"},
{66000,"ff8b6e2af6a21cfa76c764fefce6f932913a1a2feb6e8ec00a25cea1640f02aa"},
{66500,"d358c3bc78b02b6c85cedd0bfb21618fb606044add4d0c570796ffe06b7c739f"},
{67000,"545d9ff74b93a263e1963ff3ff6196e67750eed6414df03358292330476a12ef"},
{67500,"eea83790e33546ce6e3396b27c5b4109c2705b9568a65cc13789324616e6fa23"},
{68000,"a52c5d1b77fab897ff6c51a02165d2d5c6e843651d13f21332a8a523ac690b95"},
{68500,"cb22f67a21f6113fd22a99e7cb8fde0e7704854b75e982131696f165c231efa0"},
{69000,"bb37384f3e675b306594fe0874d8576eb48cc90b0111b76b78ca20318c9d7c46"},
{69500,"268a41644e2731235f03896532852a7c65c9ab0364a770e9266ffa560c92de1c"},
{70000,"0eae1266f5f8db19daa41247436cf6e2ecefea07ff695ec8f69798e1d461ceaf"},
{70500,"cb0452bbeb211eb1c70ec63006c7d9cdbb53efeffb76b7799e0a3ca1da15a887"},
{71000,"5eec16bf217fd3361ae857d0177f55d0ef2e76147940ca937b5f748e72ff064e"},
{71500,"e5aec8c4cdd740653bbaaddc1f501ab4830dc0fef79cae6b2dd652b2bcbf665d"},
{72000,"9cd331642b1c8963767523a2da99212035823c13c9538ef27a86c4ea3755780e"},
{72500,"5a343ee5d06289e83dcfcac9ebacfd02515407f8afd22b5c5db1d78c14ef224d"},
{73000,"fae6c0a87914bfea73dbff5c6043fcf7dd8964ca63a328121d33f4302e22a1a9"},
{73500,"75f50aa278dfc75f6d97911398f670ba21690bae064b9b9b6ac6719c513e8e1e"},
{74000,"06d7486c2311fe3736569f067178bd88e20673f5b74bfd1cfc61c0cad8bc20b8"},
{74500,"5eb8e8a89ff63b6abffecaaf33920f8c413e4b44f4717fe5cd1bbdd4cafce77c"},
{75000,"8fbc27f314d861822d9d069b721fe850d5e881cd03cc2f9cd18e23d000b48164"},
{75500,"2b92e9e18745e800d378cf7a53b9703a4e233de525cd2062ee13ff5343a4f78d"},
{76000,"2c6282665a082bda9f7c440096c2278577212a70fef7313bcb964cb9ea1b307c"},
{76500,"c94c84110d59d6cfb4c3d9692fc1fd5fe49c94e8b217968427c3378b85f669df"},
{77000,"a2d2555672979488e80aa2b0dad76dc126960f613490552e367d381892977012"},
{77500,"3f80d14d37a926e656d7f20ce765b75de5fa5ffc72a492772476469e962d21d7"},
{78000,"c5afb39e4b99f3ca643341e6ea1d82f3b245d31e0ac9f4c036a2680055dddd45"},
{78500,"39f3879e1c488a2414ea9c71740eb1b9d6cb99c83f0eef3a35c5293b60fe127e"},
{79000,"e95b4b315586cb6e53d017ee4ec87c554b3a617c91883ce0e7461ec3f04b3009"},
{79500,"26d844029e942c3db2fa91e9aab65e6fc5a558853faf9d4b41eb3a3b296cbc9c"},
{80000,"31e1ed21e54a652186ebe5b13adbb8508ffc6d6d8902e678146fd0910f8b9f01"},
{80500,"cde2a9cef6f9dd0df0feb10ba41d5e29ad4039d4d6cba41a4bd81431db9616e7"},
{81000,"2b7da029e4a1a9b4e285a21fcba87fb8c49a5c69335b23785df2f4513f092e41"},
{81500,"56db5ab0b0c76f88b1ecf8801b3e884e8f2667d08fd915fe32246491d0f8d88b"},
{82000,"f05476fbb1db280ca79cb5c5528df06d1ee7244bc48c28b664a5dac28b2720a6"},
{82500,"0dece2f3102a3ff7121f64f50e6e0c48384d6335088931079ae06c19644e214c"},
{83000,"3ea00a29e4bbf6fcc93ee023f7b5fccf007434211964effb58baa9f910d49d6b"},
{83500,"b242ddcd752b6f889b52612b304a519ea6bb1688b23277370aa21a3ed2bea4fc"},
{84000,"c07bcc44f7f6bb18e8b44da64b82ce53860a70ba8fd569bfc9e2102429fd9f18"},
{84500,"248dc0109433e91e3ce9ee32def3ceddd3d0d2655c0583973fbece0c45f3a4ed"},
{85000,"c6ce8a56ddaf311f4156a0c587c19fba783fa6474110819d6aaad6b6aff05fac"}
};
}
