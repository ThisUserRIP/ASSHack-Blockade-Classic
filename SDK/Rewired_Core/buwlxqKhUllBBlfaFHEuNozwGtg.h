#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core
{
	struct buwlxqKhUllBBlfaFHEuNozwGtg : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool voIEsCtdZpaVgEngsPPTJZAIrCtL;
		int32_t OPPOtDNHGlrPGeLpHmQhFxdvEAr;
		bool get_startEnabled();
		void set_startEnabled(bool value);
		int32_t get_id();
		void set_id(int32_t value);
		void _ctor(int32_t id, bool startEnabled);
	};
}

