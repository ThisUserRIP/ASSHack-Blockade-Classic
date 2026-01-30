#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Windows { struct IVSjgIkjHkcicFSNCvHLcofMloJ; };
namespace Rewired_Windows { struct mKygRZleSqkAPUNXwILyAZVBFyc; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Byte.h"
#include "..\Rewired_Core\Rewired_HID_OutputReport.h"
namespace Rewired_Core::Rewired::HID { struct OutputReport; };
namespace Rewired_Windows { struct tZaaMnCPfnoRqcCZBmSIdaXqtUQ; };
namespace Rewired_Windows { struct MveBFKgElyrlNbhSbtRuzwwRqjS; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Windows
{
	struct PdkVYCNBgINCqYNcfatIcCirAWyb
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t get_Handle();
		bool get_IsOpen();
		Rewired_Windows::IVSjgIkjHkcicFSNCvHLcofMloJ* get_Capabilities();
		Rewired_Windows::mKygRZleSqkAPUNXwILyAZVBFyc* get_Attributes();
		mscorlib::System::String* get_DevicePath();
		void OpenDevice();
		void CloseDevice();
		bool ReadFeatureData(IL2CPP::Array<uint8_t>& A_1, uint8_t A_2);
		mscorlib::System::String* ReadProductName();
		mscorlib::System::String* ReadSerialNumber();
		bool WriteOutputReportRaw(Rewired_Core::Rewired::HID::OutputReport A_1);
		IL2CPP::Array<Rewired_Windows::tZaaMnCPfnoRqcCZBmSIdaXqtUQ*>* get_ButtonCapabilities();
		IL2CPP::Array<Rewired_Windows::MveBFKgElyrlNbhSbtRuzwwRqjS*>* get_ValueCapabilities();
		mscorlib::System::String* get_InstanceId();
		int32_t get_HubId();
		int32_t get_PortId();
		bool get_IsBluetoothDevice();
		mscorlib::System::String* get_BluetoothDeviceName();
		bool get_HasLocationInfo();
	};
}

