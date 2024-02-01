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
	//�摜�̏��
	DirectX::TexMetadata metadata_;
	//�摜�C���[�W�̃R���e�i
	DirectX::ScratchImage scratchImage_;
	//�f�B���N�g���p�X
	std::wstring directoryPath_;
	//�t�@�C����
	std::wstring fileName_;
	//�t�@�C���g���q
	std::wstring fileExt_;

private:
	//�e�N�X�`���t�@�C���ǂݍ���
	void LoadWICTextureFromFile(const std::string& filePath);
	//�}���`�o�C�g������ɕϊ�
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	//�t�H���_�p�X�ƃt�@�C�����𕪗�����
	void SeparateFilePath(const std::wstring& filePath);
	//DDS�e�N�X�`���Ƃ��ăt�@�C�������o��
	void SaveDDSTextureToFile();

};

