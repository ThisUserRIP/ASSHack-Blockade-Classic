#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_Custom_CustomInputSource_Joystick.h"
#include "Rewired_Platforms_XboxOne_XboxOneInputSource.h"
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct XboxOneInputSource; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct IXboxOneInputSource; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	struct XboxOneInputSource_kvOivUQNaLxbmjPZBuOKfjnWoRN : Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* nfoumPigLVnyolJsGocQXFVwskW;
		int32_t qSThzAbjqVNZKzurXVRDfKYPacA;
		uint64_t navvmwcVBIdvwLcEQSYweQhWrnw;
		IL2CPP::Array<mscorlib::System::String*>* OcfaYXBqkKoYoUSokzmucTgZSTkf;
		struct StaticFields
		{
			int32_t ijLiMriTDoGRLxcsHYxwxKolNNX;
			int32_t KSkxgmeAibZmoSEgTBaxFJPluaa;
			mscorlib::System::String* ZQxIqgGwxJdNAsqCJYEzkXekBHw;
			int32_t undtwWdBHvcCmgZbdvDBMQnIDrPJ;
			int32_t NRITXmMYdDUosZYnJNhqyszXcgw;
			int32_t eFIFwjcOaOWPMLkNDevAQZYpuHn;
			int32_t HjeOfSSqLHYTQIbhUyJfLWdrsgt;
			int32_t MUgCGOhRTIrXJNlJELzUGsPDtdPP;
			int32_t bDEiWartSqojiIvRxfXQhZhmMJe;
			int32_t HzrGzNnXCopmlGgvDqHjymPYxYK;
			int32_t sVwkDBHxmGfnkwaFpDcDspbyzKN;
			int32_t IsAqUpYYnWEXkcdpbkBKuVkwlbZ;
			int32_t gNxLsipaBBYPwtalDkSKVBWGBkp;
			int32_t LEQvrOsGVMRxnCaCTjiviOCCNwd;
			int32_t SCSEazGmtoDnaKScvStATMRGuRA;
			int32_t eRBzbZCLvZdFKDGLjaePIejbvVYi;
			int32_t wwlXbbiEICgulCFyhxKFbockvV;
			int32_t kIQDHzPrzRPhgGdbWPsahuTkRpf;
			int32_t HYdcyBbAPfcGsyPyUCHSiTrsOZx;
			int32_t MrCwUKhuvvnFwHeazyhHnasoEBiC;
			int32_t JfVolsHSJmImQuIycezHvzXmZOs;
			int32_t ebntjnoXFTemwILLFfbFIICdApls;
			int32_t DawHxaavEgToKJciVCBwdceswJbb;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		uint64_t get_xboxControllerId();
		void _ctor(Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* inputSource, uint64_t xboxControllerId, int32_t unityJoystickId, bool isConnected);
		void Update();
		void pKLNoWCgVUqlRfCsOXaDmHUNbICB(uint64_t A_1);
		void OqEolqTlOjlkdBRVfNTslGhwDyh();
		bool KBFiAUAMvjuiowBvwTtPxpnRTTZ(int32_t A_1);
		void vikZRrGhbvWxZrAXKjMeVRxLvqI();
	};
}

