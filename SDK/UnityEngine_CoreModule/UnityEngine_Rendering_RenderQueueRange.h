#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderQueueRange
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_LowerBound;
		int32_t m_UpperBound;
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange get_all();
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange get_opaque();
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange get_transparent();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

