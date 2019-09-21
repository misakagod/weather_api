通过http://ws.webxml.com.cn/WebServices/WeatherWS.asmx提供的api获得天气预报信息
class WeatherAPI 提供以下方法

getRegionCountry(map<wstring, wstring>& Data)

获得国外国家名称和与之对应的ID
输入参数：无，返回数据：map<wstring, wstring> //名称，ID


getRegionProvince(map<wstring, wstring>& Data)

获得中国省份、直辖市、地区和与之对应的ID
输入参数：无，返回数据：map<wstring, wstring> //名称，ID

getSupportCityString(wstring code, map<wstring, wstring>& Data)

获得支持的城市/地区名称和与之对应的ID
输入参数：wstring // 省市、国家ID或名称，返回数据：map<wstring, wstring>//名称，ID

getWeather(wstring code, vector<wstring>& Data)

获得天气预报数据
输入参数：wstring //省市、国家ID或名称 ，返回数据：vector<wstring>。//天气信息

例：<string>黑龙江 哈尔滨</string>
<string>通河</string>
<string>123</string>
<string>2019/09/21 01:00:43</string>
<string>今日天气实况：气温：11℃；风向/风力：西南风 2级；湿度：94%</string>
<string>紫外线强度：最弱。空气质量：中。</string>
<string>
紫外线指数：最弱，辐射弱，涂擦SPF8-12防晒护肤品。 健臻·血糖指数：易波动，气温多变，血糖易波动，请注意监测。 穿衣指数：较舒适，建议穿薄外套或牛仔裤等服装。 洗车指数：不宜，有雨，雨水和泥水会弄脏爱车。 空气污染指数：中，易感人群应适当减少室外活动。
</string>
<string>9月20日 多云转小雨</string>
<string>7℃/20℃</string>
<string>东南风转西北风小于3级</string>
<string>1.gif</string>
<string>7.gif</string>
<string>9月21日 阵雨转晴</string>
<string>4℃/15℃</string>
<string>西风转西南风小于3级</string>
<string>3.gif</string>
<string>0.gif</string>
<string>9月22日 晴</string>
<string>6℃/20℃</string>
<string>西南风小于3级</string>
<string>0.gif</string>
<string>0.gif</string>
<string>9月23日 晴转多云</string>
<string>9℃/19℃</string>
<string>西北风小于3级</string>
<string>0.gif</string>
<string>1.gif</string>
<string>9月24日 晴</string>
<string>6℃/19℃</string>
<string>西北风转南风小于3级</string>
<string>0.gif</string>
<string>0.gif</string>

