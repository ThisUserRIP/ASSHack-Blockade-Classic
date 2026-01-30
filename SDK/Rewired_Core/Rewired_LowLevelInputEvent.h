#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Rewired_Core::Rewired
{
	struct LowLevelInputEvent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _buffer;
		int32_t njItjWVhurFcjUUemAtGeDbTAdGk;
		int32_t KSkxgmeAibZmoSEgTBaxFJPluaa;
		int32_t ijLiMriTDoGRLxcsHYxwxKolNNX;
		int32_t baGLrNReieMhjndbLLVsphCfBHF;
		int32_t DVVZDgdkoqHhtVHJWokAzKCqXMG;
		int32_t XUUFCHVeoRugttnLmJrbKNDwWkC;
		bool get_isValid();
		int32_t get_buttonCount();
		int32_t get_axisCount();
		int32_t get_byteIndex_axesStart();
		int32_t get_byteIndex_buttonsStart();
		int32_t get_byteIndex_hatsStart();
		void _ctor(intptr_t buffer, int32_t buttonCount, int32_t axisCount, int32_t hatCount);
		void SetButtonsBitMask(int32_t bitMask, int32_t startButtonIndex);
		void SetAxisValue(int32_t index, float value);
		void SetId(uint32_t id);
		void SetTimestamp(double value);
		bool GetButtonValue(int32_t index);
		int32_t GetButtonsBitMask(int32_t startButtonIndex);
		float GetAxisValue(int32_t index);
		uint32_t GetId();
		double GetTimestamp();
		static int32_t GetReportSize(int32_t buttonCount, int32_t axisCount, int32_t hatCount);
	};
}

