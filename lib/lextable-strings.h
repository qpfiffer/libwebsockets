/* set of parsable strings -- ALL LOWER CASE */

static const char *set[] = {
	"get ",
	"post ",
	"patch",
	"put",
	"delete",
	"options ",
	"host:",
	"connection:",
	"upgrade:",
	"origin:",
	"sec-websocket-draft:",
	"\x0d\x0a",

	"sec-websocket-extensions:",
	"sec-websocket-key1:",
	"sec-websocket-key2:",
	"sec-websocket-protocol:",

	"sec-websocket-accept:",
	"sec-websocket-nonce:",
	"http/1.1 ",
	"http2-settings:",

	"accept:",
	"access-control-request-headers:",
	"if-modified-since:",
	"if-none-match:",
	"accept-encoding:",
	"accept-language:",
	"pragma:",
	"cache-control:",
	"authorization:",
	"cookie:",
	"content-length:",
	"content-type:",
	"date:",
	"range:",
	"referer:",
	"sec-websocket-key:",
	"sec-websocket-version:",
	"sec-websocket-origin:",
	
	":authority:",
	":method:",
	":path:",
	":scheme:",
	":status:",
	
	"accept-charset:",
	"accept-ranges:",
	"access-control-allow-origin:",
	"age:",
	"allow:",
	"content-disposition:",
	"content-encoding:",
	"content-language:",
	"content-location:",
	"content-range:",
	"etag:",
	"expect:",
	"expires:",
	"from:",
	"if-match:",
	"if-range:",
	"if-unmodified-since:",
	"last-modified:",
	"link:",
	"location:",
	"max-forwards:",
	"proxy-authenticate:",
	"proxy-authorization:",
	"refresh:",
	"retry-after:",
	"server:",
	"set-cookie:",
	"strict-transport-security:",
	"transfer-encoding:",
	"user-agent:",
	"vary:",
	"via:",
	"www-authenticate:",
	"proxy ",

	"", /* not matchable */

};
