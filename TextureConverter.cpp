#include "TextureConverter.h"

void TextureConverter::ConverterTextureWICToDDS(const std::string& filePath)
{
	//テクスチャファイルを読み込む
	LoadWICTextureFromFile(filePath);
	//DDS形式に変換して書き出す

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	//ファイルパスをワイド文字に変換する
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filePath);
	//テクスチャを読み込む

}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	//パスを得る
	std::string path = mString;
	//ワイド文字列に変換した際の文字数を計算
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, path.c_str(), -1, nullptr, 0);

	//ワイド文字列
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//ワイド文字列に変換
	MultiByteToWideChar(CP_ACP, 0, path.c_str(), -1, &wString[0], filePathBufferSize);
	return wString;
}
