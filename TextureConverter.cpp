#include "TextureConverter.h"

void TextureConverter::ConverterTextureWICToDDS(const std::string& filePath)
{
	//�e�N�X�`���t�@�C����ǂݍ���
	LoadWICTextureFromFile(filePath);
	//DDS�`���ɕϊ����ď����o��

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	//�t�@�C���p�X�����C�h�����ɕϊ�����
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filePath);
	//�e�N�X�`����ǂݍ���

}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	//�p�X�𓾂�
	std::string path = mString;
	//���C�h������ɕϊ������ۂ̕��������v�Z
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, path.c_str(), -1, nullptr, 0);

	//���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//���C�h������ɕϊ�
	MultiByteToWideChar(CP_ACP, 0, path.c_str(), -1, &wString[0], filePathBufferSize);
	return wString;
}
