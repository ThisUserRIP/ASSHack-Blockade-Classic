#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_SortingLayer.h"
namespace UnityEngine_CoreModule::UnityEngine { struct SortingLayer; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct SortingLayer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Id;
		int32_t get_id();
		int32_t get_value();
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::SortingLayer>* get_layers();
		static IL2CPP::Array<int32_t>* GetSortingLayerIDsInternal();
		static int32_t GetLayerValueFromID(int32_t id);
		static mscorlib::System::String* IDToName(int32_t id);
	};
}

