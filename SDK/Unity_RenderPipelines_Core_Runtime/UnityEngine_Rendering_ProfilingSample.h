#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Profiling { struct CustomSampler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct ProfilingSample
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* m_Cmd;
		mscorlib::System::String* m_Name;
		bool m_Disposed;
		UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* m_Sampler;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, mscorlib::System::String* format, mscorlib::System::Object* arg);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		void Dispose();
		void Dispose(bool disposing);
	};
}

