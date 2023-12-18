#pragma once
#include <DirectXTex.h>
#include <string>

//�e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
	//�e�N�X�`����WIC����DDS�ɕϊ�����
	void ConverterTextureWICToDDS(const std::string& filePath);
private:
	//�e�N�X�`���t�@�C���ǂݍ���
	void LoadWICTextureFromFile(const std::string& filePath);
	//�}���`�o�C�g������ɕϊ�
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};

