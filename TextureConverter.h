#pragma once
#include <DirectXTex.h>
#include <string>

//テクスチャコンバーター
class TextureConverter
{
public:
	//テクスチャをWICからDDSに変換する
	void ConverterTextureWICToDDS(const std::string& filePath);
private:
	//テクスチャファイル読み込み
	void LoadWICTextureFromFile(const std::string& filePath);
	//マルチバイト文字列に変換
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};

