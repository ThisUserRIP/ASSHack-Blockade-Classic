#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "HSrlnRRbkGiWiBHBXtIniwzjliY.h"
namespace Rewired_Windows { struct HSrlnRRbkGiWiBHBXtIniwzjliY; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Rewired_Windows { struct IVSjgIkjHkcicFSNCvHLcofMloJ; };
namespace mscorlib::System { struct String; };
namespace Rewired_Windows { struct mKygRZleSqkAPUNXwILyAZVBFyc; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Windows { struct tZaaMnCPfnoRqcCZBmSIdaXqtUQ; };
namespace Rewired_Windows { struct MveBFKgElyrlNbhSbtRuzwwRqjS; };
#include "hRHsQnRlngDiKfnaveoZKuQxUHD.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "yIvKGXjkQcKNWBCuQscTzLhWZyT.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Byte.h"
#include "..\Rewired_Core\Rewired_HID_OutputReport.h"
namespace Rewired_Core::Rewired::HID { struct OutputReport; };

namespace Rewired_Windows
{
	struct HSrlnRRbkGiWiBHBXtIniwzjliY_DssLKvOctgyeAbTkjCrWYtolvdv : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t xsUIaDIUvcNzcLJDKcivzjtuWCg;
		intptr_t GBMrRxTnRRlemnjCohkoiVachTp;
		Rewired_Windows::IVSjgIkjHkcicFSNCvHLcofMloJ* oToBbDgWhQwoaSuatQQAmJEJvmQ;
		mscorlib::System::String* ahesauMpXmBqGdVqOpHHayuNSjwB;
		mscorlib::System::String* skTUtlatjLwhYHBDyeYNenqeQXt;
		mscorlib::System::String* gbzqBoqVMdaoaVQXKXWzslQHMVH;
		mscorlib::System::String* EfhXSDQkWrPERDQoxminFsHrnzp;
		Rewired_Windows::mKygRZleSqkAPUNXwILyAZVBFyc* PZVRuTAPZywzbPbqIwzdmSsgpsq;
		mscorlib::System::String* SGkoyTDvjsDGsxFbWBfUIkTnhjXI;
		int32_t uYwbwEFPCGhEtLDYiTCRNAalRqOA;
		int32_t pJZBqDDsDkpJlCXKHBtmIYWrWJPW;
		bool grqWTjkdTvvfhPoCXEelkkoBnbBX;
		mscorlib::System::String* MwDhZLhRKJWHnOrCIoBNiSwBWhTz;
		bool sedQTJirnCrsQepfrpjVaIAIXrF;
		Rewired_Windows::IVSjgIkjHkcicFSNCvHLcofMloJ* LmdHCSyAZlMlBUTKivAgPuNbpPG;
		IL2CPP::Array<Rewired_Windows::tZaaMnCPfnoRqcCZBmSIdaXqtUQ*>* ZVXvELHRzMACpvZKdldeiyEqbcX;
		IL2CPP::Array<Rewired_Windows::MveBFKgElyrlNbhSbtRuzwwRqjS*>* HFJFInWJHDiZUAljHWQfMsbTmNst;
		Rewired_Windows::hRHsQnRlngDiKfnaveoZKuQxUHD WefcIdWQRezTSUIjLhoSVTcnSdr;
		Rewired_Windows::hRHsQnRlngDiKfnaveoZKuQxUHD BIJiLYEceItuLdpEHmPOQRLUGpU;
		bool AalGCMPchrGykCZKxjAFOtIjBheH;
		static Rewired_Windows::HSrlnRRbkGiWiBHBXtIniwzjliY_DssLKvOctgyeAbTkjCrWYtolvdv* pGsEmYPhMRxtnVNkXMqDZDQpDze(intptr_t A_0, mscorlib::System::String* A_1);
		void _ctor(intptr_t rawInputDeviceHandle, mscorlib::System::String* devicePath, mscorlib::System::String* instanceId, mscorlib::System::String* description, mscorlib::System::String* manufacturer, int32_t hubId, int32_t portId, bool isBluetoothDevice, mscorlib::System::String* bluetoothDeviceName);
		intptr_t get_Handle();
		bool get_IsOpen();
		void set_IsOpen(bool value);
		Rewired_Windows::IVSjgIkjHkcicFSNCvHLcofMloJ* get_Capabilities();
		Rewired_Windows::mKygRZleSqkAPUNXwILyAZVBFyc* get_Attributes();
		mscorlib::System::String* get_DevicePath();
		void OpenDevice();
		void OpenDevice(Rewired_Windows::hRHsQnRlngDiKfnaveoZKuQxUHD A_1, Rewired_Windows::hRHsQnRlngDiKfnaveoZKuQxUHD A_2, Rewired_Windows::yIvKGXjkQcKNWBCuQscTzLhWZyT A_3);
		void CloseDevice();
		bool ReadFeatureData(IL2CPP::Array<uint8_t>& A_1, uint8_t A_2);
		mscorlib::System::String* ReadProductName();
		bool ReadProductName(IL2CPP::Array<uint8_t>& A_1);
		mscorlib::System::String* ReadSerialNumber();
		bool ReadSerialNumber(IL2CPP::Array<uint8_t>& A_1);
		IL2CPP::Array<Rewired_Windows::tZaaMnCPfnoRqcCZBmSIdaXqtUQ*>* get_ButtonCapabilities();
		IL2CPP::Array<Rewired_Windows::MveBFKgElyrlNbhSbtRuzwwRqjS*>* get_ValueCapabilities();
		mscorlib::System::String* get_InstanceId();
		int32_t get_HubId();
		int32_t get_PortId();
		bool get_IsBluetoothDevice();
		mscorlib::System::String* get_BluetoothDeviceName();
		bool get_HasLocationInfo();
		void Dispose();
		bool WriteOutputReportRaw(Rewired_Core::Rewired::HID::OutputReport A_1);
		IL2CPP::Array<uint8_t>* cBdPrgetGnoiqEtiHXvrMgOwEQU();
		static IL2CPP::Array<uint8_t>* RhCefWtgOBDxpARWYmkvUStMusg(int32_t A_0);
	};
}

