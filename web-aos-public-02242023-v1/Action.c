Action()
{
 // ere1234tyyy
	int i;
	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_start_transaction("trx_Landing_Page");
	
	web_url("advantageonlineshopping.com", 
		"URL=http://advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4101", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3103", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3102", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3101", ENDITEM, 
		"Url=/css/videos/13543361_299823923688824_1410005144_n.mp4", ENDITEM, 
		"Url=/css/images/category_banner_1.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1249", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5900", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5505", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5100", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("__Host-GAPS=1:Vo-47M4wYJaBq-BRZ_8xT-wM39gClw:rsjZhDesSiSbxsiw; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=ARSKqsLcERO8ewSmToVa1q60rJazSNjtziHxi0Y803ybRLnB3Irvrvmu0Q; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2023-02-24-19; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=iR7_gFIeXp4YgoyvTgEn8cwph_Hg_kImB4WGv9GI1E9SmoW5PbRHCw7pOoJ2qy8CF69vs9Wik-t4Cc_isLni0QHGUSvfWow-4hwooOs5ztX1rCOrmR8sHPYCXgXDBaQbChQyX7BVTQNSeRtdwWzH27z6Lg4D7VoaEQnmaSutX94; DOMAIN=accounts.google.com");

	lr_think_time(4);

	/*
	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=12:fvBI-UvIlZxXumhiB1HyYZHckgHm8xgyGytUs9_u_w8&cup2hreq=10b5f8641b943e8c308fcf1925b2c751e6d6493847b4186c556f5176b7e4be76", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.11cafe27e16296ccd0c92263805145f679bdf1efec08788c08730ef25288d24f\"}]},\"ping\":{\"ping_freshness\":\"{34e4da15-0a05-4138-978c-223dc36b852c}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.58.4\"},{\"appid\":\""
		"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{a5be71dc-d114-4d68-a806-37bbf1f7f1ba}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"plogiilmhhnoemdddmboejjgpehkdphp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"installedby\":\"policy\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp"
		"\":\"1.d75606448177bc755b89383ba5dd2896fec48463ee4d858796c33a1d339ba729\"}]},\"ping\":{\"ping_freshness\":\"{e048c9fd-830b-4d10-af57-43d13a0c40b5}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.0.1.25\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\""
		":\"10.0.17763.3650\"},\"prodversion\":\"110.0.5481.105\",\"protocol\":\"3.1\",\"requestid\":\"{91978d1b-9e28-42d5-9350-b5846eb12a80}\",\"sessionid\":\"{6bc9f9d5-88d4-4154-b914-f14940ceb14e}\",\"updaterversion\":\"110.0.5481.105\"}}", 
		LAST);
    */
	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTEwLjAuNTQ4MS4xMDUSJQmFBxXK5HnC-BIFDeeNQA4SBQ3OQUx6EgUNeG8SGRIFDQ8Wvis=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("collect",
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j99&a=1945520715&t=pageview&_s=1&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1920x937&je=0&_u=IEBAAEABAAAAACAAI~&jid=398906760&gjid=901649059&cid=2026495771.1677273847&tid=UA-81334227-1&_gid=785204948.1677273847&_r=1&_slc=1&z=778306008",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=http://advantageonlineshopping.com/",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncType=text/plain",
		LAST);

	web_url("categories", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.2026495771.1677273847; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.785204948.1677273847; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=advantageonlineshopping.com");

	web_url("search", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/arrow_right.png", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(12);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=12:EFazwHe14-p1LjLaEQFjsN2O9aGAXz1krvM_LV19iYM&cup2hreq=48915ef778dab04ae58d3d2f84728c9117f2461e85a852f1fe7a6a2bd2bc6a8f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEA\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including up-to-date)\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\""
		"{31613359-0419-432e-a735-c3e78f54b75c}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEA\",\"cohort\":\"1:1bk9:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"4.10.2557.0 for Chrome 95+\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{fb05c3b1-8d39-46c0-9840-0ca0f9d2b58f}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{effe76bc-ef54-4e93-81c2-03b3c5c86efe}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEA\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\""
		"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2f05b93b17882f6d46c35c7f6f7f9f90d7a34f888f796446d9b587e09c1987e8\"}]},\"ping\":{\"ping_freshness\":\"{b9865632-fca8-4e15-8c76-b316eb0df02f}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"9.43.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEA\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4d3d17300165ac9941be6006036ac2f7a2abdba541ce92a657141d4915019748\"}]},\"ping\":{\"ping_freshness\":\"{b08bd2db-e8d4-4343-ab7c-49c8d317dd41}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"20230204.507919928\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEA\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.51fdc8ed675d4e178328663acfdb041f18d3e0a2a05f6cb7c6fc9f602f15efcc\"}]},\"ping\":{\"ping_freshness\":\"{1726d5b8-289b-464d-b49e-c9156e1347f4}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"380\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEA\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{953e14c2-8c80-4392-a2db-386a9bf6870f}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEA\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4d4a9ece68f12d31fb4ebe458e7cbbce6bd27a5d363bce3344b1f4b5c6b024b4\"}]},\""
		"ping\":{\"ping_freshness\":\"{ee0b052f-8bd0-4b0b-85b8-c42bed3ac7ee}\",\"rd\":5898},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"58\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a95c9483e49c8e8f5c5276ac9894c96998014bbe088ffe2256a7fef4b21781f4\"}]},\"ping\":{\"ping_freshness\":\""
		"{20357534-a72d-42f7-abdf-a829f75f5ae7}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"7876\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{d68ac705-da0f-4866-81e2-9fe51d06ce78}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GCEA\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{bf52a66e-deb3-434e-8479-c1a2e2cda6aa}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEA\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5810,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f01de52469688ae15bd4cc6e43e5fd0ae8a80d4bd6954967fd4f499c7507aa2e\"}]},\"ping\":{\"ping_freshness\":\"{c045226e-7e35-49e6-8f8e-bfec264830c2}\",\"rd\":5898},\"tag\":\"stable\",\"updatecheck\":{},\"version\":\"107.294.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEA\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{5a6ab2dc-54bd-4bce-b897-98f64a7cb96a}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fe129492bb78119169580e6878c436e9a54ac5faeb9ddba782c5cee95a6eef04\"}]},\"ping\":{\"ping_freshness\":\"{bff402be-ab18-4ec2-aa6a-efad937554a5}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"510\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEA\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.938942640594fc606d1393c429930a29876f01c30ac2b21b7aa723292566b2f0\"}]},\""
		"ping\":{\"ping_freshness\":\"{9d5be85a-ed03-46f8-bc51-60daced7ff27}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2926\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEA\",\"cohort\":\"1:ut9/1a0f:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\""
		"{76df96f3-0a3d-45ce-b428-f46585872e46}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEA\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8cded944b69179992f673974ae964ce7592d6ec63c5bf08aaa2ad166702f8b95\"}]},\"ping\":{\"ping_freshness\":\"{538ecb8e-b818-4e9a-b81e-7c791d4cfaa4}\",\"rd\":5898},\""
		"updatecheck\":{},\"version\":\"112.0.5614.0\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"GCEA\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{450d1437-e5dd-4269-8c75-0edb3f1640dd}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEA\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{e777c7de-72d3-47fe-89c8-b49f9d00e578}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"GCEA\",\"cohort\":\"1"
		":17lx:\",\"cohorthint\":\"desktop_1_flatbuffer\",\"cohortname\":\"desktop_1_flatbuffer\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5c953c75dab5fcbf3e90fb5d8098380b106ccb6fbafa0ea714a917df6fea814e\"}]},\"ping\":{\"ping_freshness\":\"{a48283a5-b2da-4e2b-9021-253037a15d88}\",\"rd\":5898},\"tag\":\"desktop_1_flatbuffer\",\"updatecheck\":{},\"version\":\"30.1\"},{\"appid\":\"cocncanleafgejenidihemfflagifjic\",\"brand\":\"GCEA\",\"cohort\":\"1:13hr:"
		"\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.481c6b6e5d4234c7838fe16f9f87ec651474ac4ce5c429ff57094f93f8c730ea\"}]},\"ping\":{\"ping_freshness\":\"{fced3530-5a59-48f6-9ff5-4e1857ef8c3b}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.11.28.1510\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEA\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{aace302a-4d3e-4d70-8717-ea4b76cd1e27}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GCEA\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\""
		"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{fcff3680-bcd5-47f3-9c7d-b15f56f24009}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.3650\"},\"prodversion\":\"110.0.5481.105\",\"protocol\":\"3.1\",\"requestid\":\"{a785066c-1300-482f-b4b6-6b3e6f35e9d6}\",\"sessionid\":\"{23e1ef69-ca8f-43f8-a2ec-f1329a82db4c}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.152\"},\"updaterversion\":\"110.0.5481.105\"}}", 
		LAST);

	lr_end_transaction("trx_Landing_Page", LR_AUTO);
	
		
	lr_start_transaction("trx_Speakers_Link");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(5);

	web_url("products", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":8145,\"downloaded\":25224,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"7877\",\"previousversion\":\"7876\",\"total\":25224,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/"
		"chrome_component/adscu3jvvlqhtqgxbaus6ez7qyeq_7877/hfnkpimlhhgieaddgfemjhofmfblmnib_7877_all_b2zzeraxs4wtgj67jaybebf23e.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.caf6107592a54bd0bb55e89c14d7d21c8ab667b47f9b8c92fd12d8d152e5ddcc\",\"nextversion\":\"7877\",\"previousfp\":\"1.a95c9483e49c8e8f5c5276ac9894c96998014bbe088ffe2256a7fef4b21781f4\",\"previousversion\":\"7876\"}],\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.caf6107592a54bd0bb55e89c14d7d21c8ab667b47f9b8c92fd12d8d152e5ddcc\"}]},\"version\":\"7877\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.3650\"},\"prodversion\":\"110.0.5481.105\",\"protocol\":\"3.1\",\"requestid\":\""
		"{4b988b1d-a8f3-4a92-9ad6-db830d603bc4}\",\"sessionid\":\"{23e1ef69-ca8f-43f8-a2ec-f1329a82db4c}\",\"updaterversion\":\"110.0.5481.105\"}}", 
		LAST);

	lr_end_transaction("trx_Speakers_Link",LR_AUTO);

	lr_start_transaction("trx_Speakers_BuyNow");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(12);

	web_url("19", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/products/19", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("trx_Speakers_BuyNow",LR_AUTO);
	

	lr_start_transaction("trx_Tablets_Link");	
	web_url("product-page.html",
		"URL=http://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTEwLjAuNTQ4MS4xMDUaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDD-g8aAhgFmTvp0yIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQ5ewLGgIYBcWUklIiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEK7CDBoCGAWA1XnzIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBRhUMfciBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEM0xGgIYBTnEZIciBCABIAIoBBooCA8QARoaCg0IDxAGGAEiAzAwMTABELpzGgIYBYvykLUiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgFiHYuhCIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIBoCGAVR9vtcIgQgASACKAEaKAgIEAEaGg"
		"oNCAgQBhgBIgMwMDEwARCAEhoCGAVjJrb0IgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARDR3gEaAhgF_fKOISIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQgeYLGgIYBWt_LF8iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEM3yBhoCGAW43fEhIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCKFxoCGAXNuNQWIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);
	lr_end_transaction("trx_Tablets_Link",LR_AUTO);


	lr_start_transaction("trx_Tablets_BuyNow");

	web_stream_open("ID=1", "URL=http://advantageonlineshopping.com/css/videos/13543361_299823923688824_1410005144_n.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_stream_close("ID=1", LAST);

	lr_end_transaction("trx_Tablets_BuyNow",LR_AUTO);

	/*
	lr_start_transaction("trx_Laptops_Link");
	for (i = 1; i < 300; ++i)
  	 {
    	printf("%d ", i);
  	 }
  	lr_end_transaction("trx_Laptops_Link",LR_AUTO);
	lr_start_transaction("trx_Laptops_BuyNow");
    for (i = 1; i < 800; ++i)
  	 {
    	printf("%d ", i);
  	 }
	lr_end_transaction("trx_Laptops_BuyNow",LR_AUTO);
	*/
	
	
	lr_start_transaction("trx_Search_Mice");

	web_url("search-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/search-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("trx_Search_Mice",LR_AUTO);

	lr_think_time(23);

	lr_start_transaction("trx_Contact_Us");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=110.0.5481.105&lang=en-US&acceptformat=crx3&x=id%3Dgcodaohiclimdbpgfhnimcolninnacpl%26v%3D0.0.0.0%26installedby%3Dexternal%26uc%26brand%3DGCEA", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
 
	lr_think_time(8);

	web_custom_request("email", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/support/contact_us/email", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"categoryId\":1,\"email\":\"test@anyemail.com\",\"productId\":9,\"text\":\"Does this run Linux?\"}", 
		LAST);

	lr_end_transaction("trx_Contact_Us",LR_AUTO);

	return 0;
}
