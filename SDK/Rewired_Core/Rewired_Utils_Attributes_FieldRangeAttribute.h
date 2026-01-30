#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_PropertyAttribute.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Attributes
{
	struct FieldRangeAttribute : UnityEngine_CoreModule::UnityEngine::PropertyAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float pQzZdOUboHDMuTSAgBThTLZMgdW;
		float qVMjGWzKHxUllAmiPdIJZAHeKaq;
		int32_t yencyzAQiZBHKGJqaibCKMtyzzaZ;
		int32_t zuvcEdHxspMmXlHqoHMjSBcNyUxu;
		float get_minFloat();
		float get_maxFloat();
		int32_t get_minInt();
		int32_t get_maxInt();
		void _ctor(float min, float max);
		void _ctor(int32_t min, int32_t max);
	};
}

