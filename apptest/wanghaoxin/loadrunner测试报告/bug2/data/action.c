Action()
{

	web_add_cookie("f1c20ba73092eb6e1cf3b06df3909f12=efebd56278760da4b4ac421d65ee9f658407d4d5s%3A163%3A%22d471e1baf90848d15997733e63e5e2e5064c782fa%3A4%3A%7Bi%3A0%3Bs%3A1%3A%221%22%3Bi%3A1%3Bs%3A5%3A%22admin%22%3Bi%3A2%3Bi%3A2592000%3Bi%3A3%3Ba%3A2%3A%7Bs%3A8%3A%22realname%22%3Bs%3A15%3A%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%3Bs%3A8%3A%22username%22%3Bs%3A5%3A%22admin%22%3B%7D%7D%22%3B; DOMAIN=10.7.90.40");

	web_add_cookie("language=018b61feb84e580204e1f5bf4ccf16d438218335s%3A5%3A%22zh_cn%22%3B; DOMAIN=10.7.90.40");

	web_add_cookie("1_product=62917ff985fe103a4658deda44ad12d40b66bd4ds%3A1%3A%221%22%3B; DOMAIN=10.7.90.40");

	web_add_cookie("pageSize=ae20bd0301698d245c417940f7cb4769fb4edc22s%3A2%3A%2220%22%3B; DOMAIN=10.7.90.40");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%2C%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%5Badmin%5D%22%5D%2C%22value%22%3A%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%2C%22result%22%3A%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%7D%5D; DOMAIN=10.7.90.40");

	web_url("1", 
		"URL=http://10.7.90.40:8033/bugfree3/index.php/bug/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3/themes/classic/assets/images/active.png", ENDITEM, 
		"Url=/bugfree3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3/assets/6ac6ee64/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", ENDITEM, 
		"Url=/bugfree3/assets/6ac6ee64/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", ENDITEM, 
		"Url=/bugfree3/assets/6ac6ee64/jui/css/base/images/ui-icons_222222_256x240.png", ENDITEM, 
		"Url=/bugfree3/assets/eb62f111/img/page.gif", ENDITEM, 
		LAST);

	web_submit_data("getProductModule", 
		"Action=http://10.7.90.40:8033/bugfree3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.40:8033/bugfree3/index.php/bug/list/1", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("edit", 
		"URL=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.40:8033/bugfree3/index.php/bug/list/1", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3/assets/6ac6ee64/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3/assets/6ac6ee64/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3/assets/6ac6ee64/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3/assets/2e776087/themes/default/default.css", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3/assets/2e776087/themes/default/default.png", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3/assets/f7198d0a/indicator.gif", "Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(48);

	web_submit_data("edit_2", 
		"Action=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.40:8033/bugfree3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value=Bug", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value=系统管理�\x98", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=系统管理�\x98,", ENDITEM, 
		"Name=BugInfoView[severity]", "Value=1", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=1", ENDITEM, 
		"Name=Custom[BugType]", "Value=代码错误", ENDITEM, 
		"Name=Custom[HowFound]", "Value=单元测试", ENDITEM, 
		"Name=Custom[BugOS]", "Value=其他", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value=其他", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value=dian ji biao ji wu fan ying", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value=", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.<br />\r\n2.<br />\r\n<br />\r\n[结果]<br />\r\n<br />\r\n[期望]<br />\r\n<br />\r\n[备注]<br />\r\n<br />", ENDITEM, 
		LAST);

	web_url("BugFree", 
		"URL=http://10.7.90.40:8033/bugfree3/index.php/bug/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3/assets/eb62f111/img/page.gif", ENDITEM, 
		LAST);

	web_url("Bug", 
		"URL=http://10.7.90.40:8033/bugfree3/index.php/bug/1142", 
		"TargetFrame=_blank", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://10.7.90.40:8033/bugfree3/index.php/search/getPreNextId?id=1142&type=bug&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.40:8033/bugfree3/index.php/bug/1142", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://10.7.90.40:8033/bugfree3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.40:8033/bugfree3/index.php/bug/list/1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	return 0;
}