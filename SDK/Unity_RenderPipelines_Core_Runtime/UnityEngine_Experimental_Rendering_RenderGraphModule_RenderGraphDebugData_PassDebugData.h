#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDebugData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphDebugData_PassDebugData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>*>* resourceReadLists;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>*>* resourceWriteLists;
		bool culled;
		bool generateDebugData;
	};
}

