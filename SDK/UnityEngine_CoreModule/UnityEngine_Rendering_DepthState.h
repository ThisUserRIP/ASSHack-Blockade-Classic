#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_CompareFunction.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct DepthState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t m_WriteEnabled;
		int8_t m_CompareFunction;
		static UnityEngine_CoreModule::UnityEngine::Rendering::DepthState get_defaultValue();
		void _ctor(bool writeEnabled, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::DepthState other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

