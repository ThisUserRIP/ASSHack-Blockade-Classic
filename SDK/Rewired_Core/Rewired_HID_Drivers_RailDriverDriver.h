#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_Drivers_HIDDeviceDriver.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "Rewired_HID_OutputReport.h"
namespace Rewired_Core::Rewired::HID { struct OutputReport; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver_InitArgs; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "Rewired_HID_Drivers_RailDriverDriver_bYLmrvAAvbsVHwzoMKwileBNnkd.h"
#include "pTaUWNCRKhFUsYKVFGrqGVORlTZ.h"
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement; };

namespace Rewired_Core::Rewired::HID::Drivers
{
	struct RailDriverDriver : Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* ZHlaTGkyYykRYhLPSGbtAJPCqhm;
		Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* AJMfCyDwiNvSuoYkWvovCUxNKrrN;
		bool ekTiiByHklUoxJhQImGxyzWmVbz;
		IL2CPP::Array<uint8_t>* TCUthiIegSkIFjmCKYCXOCPsKjj;
		Rewired_Core::Rewired::HID::OutputReport FNDDGdjkAPWbpRfAaJPDbjrpIPD;
		mscorlib::System::Func_2<Rewired_Core::Rewired::HID::OutputReport, mscorlib::System::Boolean>* jbyKNXDQTjaeRHKaJmikKrQvHLg;
		mscorlib::System::Action_1<Rewired_Core::Rewired::HID::OutputReport>* GuiflVsmQruZvXwcUWRKgEtLoXm;
		struct StaticFields
		{
			int32_t fgehjjbKdGLdPpWZipDPKlaKsevH;
			int32_t fNbRKDyhTkpWIwNHdECnksGHTXr;
			int32_t NFDrpyMSEQSmoWpJHEcLgpMdakK;
			int32_t BVpfSNQNldtjfNzLhfkCsVcXZoZ;
			int32_t ZfLCyKqPRIvdYHCUBwqkLjqvGJo;
			int32_t lJecMnAUEvYfcKVHROLsJsOrmnBe;
			int32_t qRRrSstjlKhOIILkJgKUIzMiqpub;
			int32_t xsxmPzwWdAkinyASorvlCQISfvp;
			int32_t kZPYEFXJLeRwtlGXttIJwnUNMkW;
			int32_t RuWapDBNKEgmTjfWKtksStZipJZF;
			int32_t wyEFoFIjsbzQfBxsFVSwGWsbcHeL;
			int32_t flDaJXbAWeHivPMDuUtBkZWHavm;
			int32_t aTIqZlidNiKfDwIXcmEfVBcXndD;
			int32_t hjdKkBtQUzcyBtgQGntdQDgPTKI;
			int32_t qUrdWCimBkeefiHZaSAImInKdtMA;
			int32_t lCwhyRBLQsbvTXUvesjzWsgxJgyG;
			int32_t JOMbNnAKbxLrhTNrysXXvvDURCf;
			int32_t acmAZEslMlMMqNwTiULuqsPxRyJ;
			int32_t LxnEhqOLdUtUseUwIzUUYLqLnVq;
			int32_t fmAaPGRSTqnnIHNvQDqoeWpHkQse;
			int32_t QXWZNNkdWePTFkIUUprgOeLcAzHd;
			int32_t unZyQmmaZXTkVDoPWbccCdsbNwJl;
			int32_t unZopZjGcqkvnGOGohsFWukbfIs;
			int32_t mHqliyqzSWeBPdbTAmqZtRoxgEG;
			int32_t rKKZhmHAIBigKgzKACaZEpHRife;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_SpeakerEnabled();
		void set_SpeakerEnabled(bool value);
		void SetLEDDisplay(int32_t digitIndex, uint8_t digitBitValues);
		void SetLEDDisplay(uint8_t digit1BitValues, uint8_t digit2BitValues, uint8_t digit3BitValues);
		void _ctor(Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs* initArgs);
		void Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		bool ParseInputReport(intptr_t inputReportPtr, int32_t inputReportLength, double timestamp);
		Rewired_Core::Rewired::Controller_Extension* CreateControllerExtension();
		bool lWTpHFKaDKolmdxJVgMoOEacYqX(Rewired_Core::Rewired::HID::Drivers::RailDriverDriver_bYLmrvAAvbsVHwzoMKwileBNnkd A_1, Rewired_Core::pTaUWNCRKhFUsYKVFGrqGVORlTZ A_2);
		void OjDoJmpZnCMUnxogndedVFpSZDB(Rewired_Core::Rewired::HID::Drivers::RailDriverDriver_bYLmrvAAvbsVHwzoMKwileBNnkd A_1);
		bool bopNSKwNpTqLOOgOibaZGDQohIJi(Rewired_Core::pTaUWNCRKhFUsYKVFGrqGVORlTZ A_1);
		void InBylEmicHyvZaFxBXrthYXUcON(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* A_1, double A_2);
		void mdBGbxvXBHziRHzFUjsifMYFBgc(IL2CPP::Array<Rewired_Core::Rewired::HID::HIDControllerElement*>* A_1, Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* A_2, double A_3);
		void Finalize();
		void Dispose(bool disposing);
		static bool Matches(int32_t vid, int32_t pid);
	};
}

