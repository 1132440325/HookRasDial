// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� HOOKRASDIAL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// HOOKRASDIAL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef HOOKRASDIAL_EXPORTS
#define HOOKRASDIAL_API __declspec(dllexport)
#else
#define HOOKRASDIAL_API __declspec(dllimport)
#endif

// �����Ǵ� HookRasDial.dll ������
class HOOKRASDIAL_API CHookRasDial {
public:
	CHookRasDial(void);
	// TODO:  �ڴ�������ķ�����
};

//extern HOOKRASDIAL_API int nHookRasDial;

//HOOKRASDIAL_API int fnHookRasDial(void);
