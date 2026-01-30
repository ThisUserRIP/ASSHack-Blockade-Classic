#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct SortingLayerRange
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int16_t m_LowerBound;
		int16_t m_UpperBound;
		void _ctor(int16_t lowerBound, int16_t upperBound);
		static UnityEngine_CoreModule::UnityEngine::Rendering::SortingLayerRange get_all();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::SortingLayerRange other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

