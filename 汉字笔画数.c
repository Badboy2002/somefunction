#include <stdio.h>
#include <string.h>
int getstrokes (void);  //���������ַ�����,�����ܱʻ��� 
int main (void)
{
	int strokes;
	printf ("����������:");
 	getstrokes ();
	return 0;
}

int getstrokes (void)
{
	char name[20];
	int mark=0,big=0,istrokes=0,test=0,chars=0;  //markΪ���ݿ������� testΪ���������� bigΪ�����ַ��� strokesΪ�ʻ����� chars����ѭ�� 
	char strokes0="";
	char strokes1[]="һ��";
	char strokes2[]="������ؿ���˶����������缸�ɵ�������ذʮ������";
	char strokes3[]="��ܳ�ŉ�������ء�ݴ�����󷲄G�F�ɸɸ��ù��������������m�ݽ��ÁX�ތH�ڎw����}ô�����`Ů��آ��ǧ���ЄU��ɽ�������ʿʬ������������ر�聓�����������@أϰϦ����С����_��Ѿ��Ҳ߮�������ځ������֮��";
	char strokes4[]="����ؤ��ר�зᵤΪ֮�������ƻ����微��ʲ�������ƽ��ͳ������Դ��ز���Ԫ�������ڸ��߷��׷�����Ȱ�카���Ȼ�ƥ��ئ��������������˫������̫��ز�����������Ͱͱһ�إ��������껧����֧���Ķ��﷽����Ի��ľǷֹ������ë����ˮ��צ��س��Ƭ��ţȮ�������ռ��ƶ����ϼ������˳��Ŷ�Τ�緦";
	char strokes5[]="��ا�����ҵ�Զ�˿��է�����������̸�������Ǫ�������������������Ƚ��д����͹��������ۻ������۽���ұ��ѻܰ�߲ռ��¬شî��ȥ���ž���߶ߵֻ���ٰȶ���̨߳ʷ����Ҷ��˾̾߷��ߴ����ʥ�����뺻ʧͷū��������島Զ����������ɾ��в�˧ƽ�����͸�����������˰Ǵ��ӳ⵩��δĩ��������ĸص�����֭͡�㺺��������ϸ�����˦���ɼ�������Ƥ��Ŀìʸʯʾ���Ѩ����ܴ��ܵ��ڦڧ����ڨ��ѵ��Ѷ�����������������������㼢Ԧ����";
	char strokes6[]="ة��ƹ����������ب�ǽ�������������������ηݷ��������鼿���������Ż����ɡΰ������������α���������ȹ�ȫ�������پ�ũ��������������̻��������մ��Ӷ��ٽ��ﻪЭӡΣѹ�������Ը�ߺ�ϼ���ͬ����������߸����߹�����ض�������������ع����ݵ����۳���׳�����Ŀ�ж��ż�������������ױ�����ִ���լ���ذ���Ѱ���⳾��Ң��������������Ѳ����ʦ�겢ׯ����͢��ʽ�ڵ�����æ������Ϸ���п���Ǥִ����ɨ����ּ��Ѯ������ҷ�����Ӷ����ɱ��Ȩ�λ����������������ϫ���Ǻ�Ѵ���꽭���������ƻ�ү��Ĳ�����������������������������Լ������������������Ͽ�����������߼����������������ɫܹܷ����ܻܺܶâܼ֥ܸ��Ѫ�������۽���کڪ��ګ�������Ϸ���þ��긺���Ǩ����Ѹ���������ǰ�а�������Ʊ��ʴ���������������ҳ���ѱ����";
	char strokes7[]="���ϴ����Һ�Ķ����٣����������٤�赫λ��ס�������٢��������������١��Ӷ��������������ұ�䶳��ɾ������������Ŭ��۾ۿ������ϻҽ��±��ȴ���ؾ������������ķ�ɶַԺ�����˱��֨���ⳳ�����Ǻ���ѽ�����ʸ�߻��߼߽߾Ż߿��Ա��Ǻ�ض���԰����Χ����ַ�������̮�������ӿ��̳�ް����׹������ۼ�����ʼ�����������׷��������������Т���������β���ƨ�����᯲�᫸���ᰵ��ϣ���ʱӴ�����®�п�Ӧ��Ū������ͮ���۳���������߯־���������������������黳���������ҽ�Ť�糶�Ű�������Ҽ����������ץͶ�����۸����ҿ����������������Ĺ�꺺�ʱ�������ɼ����ӲĴ���ȶ������������迼�죲���ÿ����������̭�������������������������������ɳ�湵û��Ž���ٲ��������������ֲ��ĵ��״�������ұ����긦��е����������������������˽ͺ����ϵγ硴��ɴ�������ڷ�ֽ�Ʒ�Ŧ磺�Ǽ��Ф��Ǹ�����뿳�������ܽ�������ҽ�«����ܾ�Ұ���о����������ܿ��ѿ������έ�������ɲ���������򰲹����֤ڬڭ����ʶթ����ڮ�ߴ�ڰگ��ڱ�ȶ��������Ƴ���������������ӭ�˽��·��û����ԶΥ�������ʺ�ۢ����������ۡ�����������붤�������������ȼ������������簢���鸽��½¤���������������������¿𯼦���";
	char strokes8[]="ɥ������Щؽ����������ۼ�٦٥٬ٮ٫ʹ٩ֶ��٨����٪٧ٰ���������½�����ȿ�٭ٯ������ߵ�������ƾ�����ε�����ˢȯɲ�̹̿����ܶ�������б���׿�������Ծ����������ȡ����������ζ���������������������զ�;�ӽ�����ǹ����������а���̹�ͼ����̹����ƺ��������������崹��¢���䱸ҹ�����η�ܱ����������ķʼ�����ί����߼�����ѧ���ڹ��涨���˱�ʵ�����о������������������Ằ�ᴿ������������������㲯���ҵ��ҵ��������ӷϽ����һ�����¼�������޾����������̬�����������²��������������������������޻�����巿��������̧����Ĩ��Ѻ�����������Ĵ�����԰�������ذ����־�׾����£��ӵ��š����Ÿ�ն����������껲�����������������º���������������ɰ幹��������������ö��֦������������ǹ���ɹ���ŷ������Źå����ĭ��������ӷ������ӹ�մ��й���������﷨����Ţ���ݲ�����ע����������Ӿ������к������ǳ��¯���׳�Ȳ��������������ְ��������������������������õ�⻷�����߰�����������ű���������äֱ֪�������������������ѱ�������������������ϸ֯��称������ﾭ���������Ү���֫���ʼ緾���ǰ����������ɷ�����������в�����Է����̦�����ܿ��ٰ�����������ɻ��Ӣ����ƻ����ï����é�������ݾ����������Ợ²�ʭ�������Ĺ�����ڲڳ��ڴʫڵڶ����ڷ����ڸڹ��ѯ��ں�����ڻڼ���Ͱ��˻��ʷ�̰ƶ�Ṻ����ת�������������������ǵ��ȵ�������ۥ��ۧۤۨ����ۣۦ֣۩�ɽ���ǥ���̷���������բ�ָ�ªİ����������������Ƕ��꽤�α�������ʻ�������פ������������������";
	char strokes9[]="�پ�ͤ��������ֱ�ٶ�ٴ��������ٸ�׷�ٵٷ����ٹ��ٶٱٲ��ٳ��������ð��������ǰ�н�������ѫ����ж����ܱ�����������������������ҧ�ҿ��ۿ����������ް�Ʒ�Ӻ���۹��������������������ܻ�����������Ӵ����������������ҹ�ԫ������ѵ����������︴�������Ƚ��Ҧ�����������������¦�欽���Ⱥ��Ͽ�����嶻��ܹ��⽫�ٳ���ʺ������Ͽ���Ͳ���۴�֡�������Ӷ�ͥ�������������ߺ��໲������ŭ˼����Թ�������ѻк������㡶��������������ս���������������˩�ٿ�ƴקʰ�ֹ�ָ����������̢Ю�ӵ���������Ųͦ������ʩ������ӳ�������������������������Կ������ռܼ������ڱ���ĳ����Ⱦ���������������ܲ��Ѽ���������������դ��ջ���ж��������������������жζ�����ձ�����Ȫ��������������ϴ���嶴��䢺��䬶�����䡻���Ǣ��䤽���ǲ�䫼�䯻��Ũ�����̿�ھ��Ʊ���ը����������˸�����������ǣ�ݽ���������ʨ�������������貣��������ɺ���巩����������η��̽����ߴ����Ի������ӯ�����ζ�ʡ������ü����գ�����ɰ������������ש����������������������ף��������خ���ֿ����������ͻ������ĸ����������Ѱ��޽����笻��Ѥ������ͳ�������ˣ��������θ�е�����̥����������ʤ�հ���ط��������������������������ݢ����ã�������������������������������������������������������ٻ�����ӫݡݣݥ��ݤݦݧҩ����Ű�������Ϻ�ʴ���������������ǰ���Ҫ�������������ڽ��ھ�ջ�ڿ˵�����������������ܴ�ó�Ѻ�������ſ�����������������������Աż�׷��������������ѡѷۭۮ۬�¿�۪۫�������ظ������Ҷ۳����Ʊ�������Կ�վ��ٹ���������ť�ٹ��������̷���ұ��춸Ժ������������������˳����ʳ�����ýȱ�����������溧��ǹ�Ÿѻ��";
	char strokes10[]="���񸩾�ٽٺ�����ı�ٿ�����Ⱥ����ý賫�ž���ٻ��پ����ծֵ��ټ������ڣԩڤ��׼ڡ���������������߰����·�������ԭ�Ÿ�Ŷ�������������������������������������������������Բ�����������������������������ɼ����������淶��������ث�׺���������ݿ�������мչ�������ͷ������ϯ��������ͽ��������ˡ��������������Ϣ�Ҷ����㩺�㨻��������������ȭ����ֿ�ΰ�������������ͱ��׽�۰ƺ�����貶����񻻵�Ч�͵а�ի����������˻ν�����ɹ������������˷���ʲ�˨������У�����������˸����������������Φ����������ͩɣ�����������嵵����������׮���������ѳ������볺������̩�����㿣�����ֺ��˸��ԡ�����Ϳ������ӿ��������������л�������ɬ���Ⱥ������̿������ǻ��̽��Ȱ��������������������������������������������ƿ���������������ƣ���������۾Ҽ������䲡֢Ӹ������������յ�μ�����������ѣ���|��������������������������������������������������������������խ���վ���ǰ�������Ц�����ʷ������������篾������м��ȱ�ո����̳���ȸ�����Ű��ʳܵ������ٿ������ܸ��ؽ��ذ�����֬�༹������������ŧ������Ҩ�������������������޺�ݩݶݱݴݰ����ɯݮݷݯݸݬݹݳݭĪݨ����ݪݫݲ��ݵӨݺݻç�����������������������˥����Ԭ��̻�����ȱ���������ŵ���·̿�����˭�ŵ�����׻��̸�����������޼ֻ�����¸����������������������������������������͸���ϵ�;�Ѷ�ͨ���ų������ҷ����߲�ۯ��۰�����������������Ƹ���Ǯ��ǯ�ܲ������������������������������Ǧí����������������������������������������������˶���������Ԥ�Ķ���������鿥������ت���Ѽ����ԧ��";
	char strokes11[]="�����Ǭ�ȼ�����ƫ����ͣ��ż͵���ǳ�����������ջ˼������ÿ�������������ɾ�������Ψ৳������������������������਷�ơɶ����ž���������Х����Ȧ����������ܤ���������ܣܥ�ö���ܡܢǵ��¹���Ȣ������漻�����Ӥ������޼ż����ܿ�ξ���ǳ���������������±�ո�ĳ�ᡳ�������������ӹ�����ȵ���ʱ����������Ϥ�ƻ��������㲼�㬵���㰾�������ϧ�Ω����㫲ѵ������������������ߴ��������Ƶ���ڵ�����������Ҵ����̽�ӿ����ڴ�������°����������������뷽����ָ���б��������������޳�����������Ͱ����÷������������е�����������������봸�������Һ�����õ�������������������������ĵ��������㻴���������Ԩ�����½������������ϩ������ɺ����ʻ�����ˬ����������⨲���Ͳ������è����������������������Ȭ�����̺���𨰨��п��ǵ���ʢ�������������������������ι�����������˶������Ʊ���������ƻ���Ҥ��񻾹���ϵ��������ӷ����ε��������ͼ����������ɴ�ճ�����ۼ�������糴�����ά��緱������������׺�����������������������ְ������������㸬���������������沰������������ݼ�ѹ��վ�������ݿ�����˲���ݾ���������������ݽ����������Ƽή����������өӪ�����������������������������������ȹƵ����������´���Ϯ��������������ı�ȵ�����г����ν�����β�����������������������������������ֺԾ�ľ����������մ�����������۱��۲�����̪Ұ������������������ͭ����������ϳ��������������綠�ҿ�����������������������ղ���¡������������ȸ��ѩ­���ľ����ڹ�ظ�����������������¹����ƹ�";
	char strokes12[]="�������������ϴ��а���ʣ��ļ�����ó����౿��ι�����஺�����ิ��ϲ�����������������ܧܦܩ���̿���ܨ��Ҽ���������ý������ɩ���ܸ��º�Ԣ�����������������Ƕ����������������ñ��ᢷ�߱ǿ����������ѭ����ݳͱ���㷻�����������㶷�����ſ�������Ƴ��������������������Ҿ�����մ���������Ԯ��������§����ɦ�Ѵ����ɢ�ؾ���쳰�˹�վ����羧�������������������������ؼ������ɭ��������������ֲ׵駽��������Ҭ�������ۿ�ֳ����̺��릵��������������������μ���ֿ����������������պ���տ��������ʪ�����Ӹ��ѳ��̻��ͱ��ٽ�������Ȼ�����Ϭ�������������⮺��⪻����������������������������������帷���趻ʹƦ�����������컾�������������������������Ӳȷ����»������������˰�Ѵ������ѿ�ͯ��ڵȽ��ܷ�����Ͳ�������ɸ����������������������罼������翼������������Ļ����Ʊ���Ե��������������������Ƣ������Ҹ�縭��ǻ��������������˴��ͧ�������������ظ����϶����������ڿ������ݵ������޽��������ֻ����������Ը��������������������ѽֲ���װ����ԣȹ���Ͽ������������������лҥ����ǫ�������������ʹ����������Խ���̰ϵ����������������ȼ������Թ����ꢹ��������������������ٵ����������������������������������ﭳ��������ﲷ�п������������������׸���϶�����ż�������������������������Ȳ�ƭ��ɧ����³������������������������";
	char strokes13[]="����ɵ������ڵ������������ɤ������������������������������������������ܪ��ܫĹ��ϱ�����ż޼�����������į�������ջ�Ļ���������΢������������޸�㺴���������������������������°�Я�������ҡ��̯������������Ͼ��ů���驴����Ш���������騿���¥鯸���������鶻���Ъ���������Դ������������Ϫ�����������������������������������������б�̲��Į�����ӻͼ���ɷú���������������������Գ�����觺����ɪ������̵��ձ����������������������˯�������޲Ƕ��鰫���ֵ�µ���鱮��������������������������������տ������������������ǩ�������Ӿ������Ƿ��ɲ������������������Ⱥ����Ƹ�������������������������������Ⱦ�����������������������������������������������������������������Ӽ����������������������������������������չ���������������ղ���ܽ�á������������������������ӿ������·�������Ѷ��Ҷ�ꣷ������δǱ�������ǲң�۱�۴۳۵���ҳ�ͪ�����������ﻴ�ê���������സ׶�����������Ķ�������������������Ӻ�³����ױ�������ѥ��������Ƶ���ӱ�������������������տ������������ֱ�������ȵ�������������������";
	char strokes14[]="����������ɮ���������Ӿ������������������м��Ѹ�����������������ܬ����ܭ��ǽܮ���������˵��������ͷ�������կ���������α���ԸĽ����㼿������ˤժ������ġߡ����Ʋ�������������������黰��ե������ȶ���������������ģǸ��ع����Ư����©����������������������������Ϋ������ɿϨ��Ѭ���������������������������������������ݴ��غ��������ܱ̼���̼���۴Ŵ����������߶��빿�䲭�������������������������������վ�������������ӧ��������Դ����������ظ�������������Ĥ�����������ޤޣ��������ε������Ǿ������ޢ����ޡ��֩����������������������������Ӭ�����������ۺ�����������������̷���������ܺ�ò׸��׬����������ӻ��ԯϽշ������۷۶������ø��������������������������������������Ͷ�þ����������������������������ؿ�������������������������������������������������������ؾ��";
	char strokes15[]="������Ƨ��������������������˻����������ҭ�����������޸�ܯ����ī��������������ᦴ���Ӱ��»�ο�����㿺�㽶�¾Ħ�����˺ߤײ�����˲���׫��ߢߣߥ�ܷ�ĺ�����β��ȷ�����������ӣ������������Ǳ��̶�����������γ����������������������������������������̱��Ϲ���ޫ����������ݿ����𡵾�ڻ�������������׭ƪ����¨�����ں����������������������������ϱ���ϥ��������ެަ����ޥީިާޭ��ު���Ы�����������������������������������������������Ǵ����ԥ������Ȥ̤���׾������۲���������������������������������������������ָ��������������ù����Ь�����������ն�Ʈ���������������������������������������������Ϻ�����";
	char strokes16[]="������弽����������ج�����������������Ա������������������������и��������ߦ���ò���ߧߨ��������������������ٳ��ӳ���������������º����壼���������ȼ�������������̡�ư��������ȳ��������Ƴ�ĥ������������������������������������ܲ��������ٽ�����纲�������������������޳ޮ�ٱ�޶ޱ޲Ѧ޵ޯްн޴���������������������������������������������������ꥱ���������۸����������ȩ�����������޾�������������������ص����������쮲���������������������������������������������������ǭĬ";
	char strokes17[]="�����麿�����ֺ��������ڻ�����ų���ߪߩ������̴ϭ������������������ƾ���������������˲ͫ����׽������������������������㿷�㷱�������������������족�ӷ��������޹޸޷޻�����޺������������������������������Ӯ念���̣���������������������������������������˪ϼ������������κ���������������������������������������ȣ";
	char strokes18[]="�����������´����������������հ��������������ݷ���ź޼�ٷ��������������������������������������������������������������������ӥ";
	char strokes19[]="����������������߫������嬱�跰꽮Ѣ��������������������޽޿Ģ޾з���������ྯ�ߵŲ�������������۹��������������������������������������������������´";
	char strokes20[]="������ػ�½�����Ρ�����容����Ǽ�Ŵ��ҫ�������Ʃ����ۺ���������ܰ����ħ������";
	char strokes21[]="��������������������������������������¶�������";
	char strokes22[]="������ܱ��ܲ�ȿ���պ��������";
	char strokes23[]="��������������߬��������ȧ";
	char strokes24[]="��������屴������������";
	char strokes25[]="��������߭��";
	char strokes26[]="���";
	

	
	
	scanf ("%s",&name);
	big=strlen (name);
	while (test<big)
	{
		while (name[test]!=strokes1[mark]||name[test+1]!=strokes1[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=4)
				break;
		}
		if (name[test]==strokes1[mark]&&name[test+1]==strokes1[mark+1])
			istrokes=istrokes+1;
		mark=0,chars=0;
		
		while (name[test]!=strokes2[mark]||name[test+1]!=strokes2[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=48)
				break;
		}
		if (name[test]==strokes2[mark]&&name[test+1]==strokes2[mark+1])
			istrokes=istrokes+2;
		mark=0,chars=0;
		
		while (name[test]!=strokes3[mark]||name[test+1]!=strokes3[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=198)
				break;
		}
		if (name[test]==strokes3[mark]&&name[test+1]==strokes3[mark+1])
			istrokes=istrokes+3;
		mark=0,chars=0;
		
		while (name[test]!=strokes4[mark]||name[test+1]!=strokes4[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=278)
				break;
		}
		if (name[test]==strokes4[mark]&&name[test+1]==strokes4[mark+1])
			istrokes=istrokes+4;
		mark=0,chars=0;
		
		while (name[test]!=strokes5[mark]||name[test+1]!=strokes5[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=404)
				break;
		}
		if (name[test]==strokes5[mark]&&name[test+1]==strokes5[mark+1])
			istrokes=istrokes+5;
		mark=0,chars=0;
		
		while (name[test]!=strokes6[mark]||name[test+1]!=strokes6[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=696)
				break;
		}
		if (name[test]==strokes6[mark]&&name[test+1]==strokes6[mark+1])
			istrokes=istrokes+6;
		mark=0,chars=0;
		
		while (name[test]!=strokes7[mark]||name[test+1]!=strokes7[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1064)
				break;
		}
		if (name[test]==strokes7[mark]&&name[test+1]==strokes7[mark+1])
			istrokes=istrokes+7;
		mark=0,chars=0;
		
		while (name[test]!=strokes8[mark]||name[test+1]!=strokes8[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1352)
				break;
		}
		if (name[test]==strokes8[mark]&&name[test+1]==strokes8[mark+1])
			istrokes=istrokes+8;
		mark=0,chars=0;
		
		while (name[test]!=strokes9[mark]||name[test+1]!=strokes9[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1508)
				break;
		}
		if (name[test]==strokes9[mark]&&name[test+1]==strokes9[mark+1])
			istrokes=istrokes+9;
		mark=0,chars=0;
		
		while (name[test]!=strokes10[mark]||name[test+1]!=strokes10[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1466)
				break;
		}
		if (name[test]==strokes10[mark]&&name[test+1]==strokes10[mark+1])
			istrokes=istrokes+10;
		mark=0,chars=0;
		
		while (name[test]!=strokes11[mark]||name[test+1]!=strokes11[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1392)
				break;
		}
		if (name[test]==strokes11[mark]&&name[test+1]==strokes11[mark+1])
			istrokes=istrokes+11;
		mark=0,chars=0;
		
		while (name[test]!=strokes12[mark]||name[test+1]!=strokes12[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1276)
				break;
		}
		if (name[test]==strokes12[mark]&&name[test+1]==strokes12[mark+1])
			istrokes=istrokes+12;
		mark=0,chars=0;
		
		while (name[test]!=strokes13[mark]||name[test+1]!=strokes13[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=1044)
				break;
		}
		if (name[test]==strokes13[mark]&&name[test+1]==strokes13[mark+1])
			istrokes=istrokes+13;
		mark=0,chars=0;
		
		while (name[test]!=strokes14[mark]||name[test+1]!=strokes14[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=790)
				break;
		}
		if (name[test]==strokes14[mark]&&name[test+1]==strokes14[mark+1])
			istrokes=istrokes+14;
		mark=0,chars=0;
		
		while (name[test]!=strokes15[mark]||name[test+1]!=strokes15[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=620)
				break;
		}
		if (name[test]==strokes15[mark]&&name[test+1]==strokes15[mark+1])
			istrokes=istrokes+15;
		mark=0,chars=0;
		
		while (name[test]!=strokes16[mark]||name[test+1]!=strokes16[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=516)
				break;
		}
		if (name[test]==strokes16[mark]&&name[test+1]==strokes16[mark+1])
			istrokes=istrokes+16;
		mark=0,chars=0;
		
		while (name[test]!=strokes17[mark]||name[test+1]!=strokes17[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=344)
				break;
		}
		if (name[test]==strokes17[mark]&&name[test+1]==strokes17[mark+1])
			istrokes=istrokes+1;
		mark=0,chars=0;
		
		while (name[test]!=strokes18[mark]||name[test+1]!=strokes18[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=142) 
				break;
		}
		if (name[test]==strokes18[mark]&&name[test+1]==strokes18[mark+1])
			istrokes=istrokes+18;
		mark=0,chars=0;
		
		while (name[test]!=strokes19[mark]||name[test+1]!=strokes19[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=158)
				break;
		}
		if (name[test]==strokes19[mark]&&name[test+1]==strokes19[mark+1])
			istrokes=istrokes+19;
		mark=0,chars=0;
		
		while (name[test]!=strokes20[mark]||name[test+1]!=strokes20[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=82)
				break;
		}
		if (name[test]==strokes20[mark]&&name[test+1]==strokes20[mark+1])
			istrokes=istrokes+20;
		mark=0,chars=0;
		
			while (name[test]!=strokes21[mark]||name[test+1]!=strokes21[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=52)
				break;
		}
		if (name[test]==strokes21[mark]&&name[test+1]==strokes21[mark+1])
			istrokes=istrokes+21;
		mark=0,chars=0;
		
			while (name[test]!=strokes22[mark]||name[test+1]!=strokes22[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=30)
				break;
		}
		if (name[test]==strokes22[mark]&&name[test+1]==strokes22[mark+1])
			istrokes=istrokes+22;
		mark=0,chars=0;
		
			while (name[test]!=strokes23[mark]||name[test+1]!=strokes23[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=28)
				break;
		}
		if (name[test]==strokes23[mark]&&name[test+1]==strokes23[mark+1])
			istrokes=istrokes+23;
		mark=0,chars=0;
		
			while (name[test]!=strokes24[mark]||name[test+1]!=strokes24[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=24)
				break;
		}
		if (name[test]==strokes24[mark]&&name[test+1]==strokes24[mark+1])
			istrokes=istrokes+24;
		mark=0,chars=0;
		
			while (name[test]!=strokes25[mark]||name[test+1]!=strokes25[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=12)
				break;
		}
		if (name[test]==strokes25[mark]&&name[test+1]==strokes25[mark+1])
			istrokes=istrokes+25;
		mark=0,chars=0;
		
			while (name[test]!=strokes26[mark]||name[test+1]!=strokes26[mark+1])
		{
			mark=mark+2;
			chars=chars+2;
			if (chars>=4)
				break;
		}
		if (name[test]==strokes26[mark]&&name[test+1]==strokes26[mark+1])
			istrokes=istrokes+26;
		mark=0,chars=0;
		
		
		printf ("ǰ%d���ֵ��ܱʻ�Ϊ%d\n",(test+2)/2,istrokes);
		test=test+2;
	} 
	printf ("�ܱʻ�Ϊ%d\n",istrokes);
	getchar ();
	getchar ();
	return 0;
}
