#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_BuiltinRenderTextureType.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_CubemapFace.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderTargetIdentifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::BuiltinRenderTextureType m_Type;
		int32_t m_NameID;
		int32_t m_InstanceID;
		intptr_t m_BufferPointer;
		int32_t m_MipLevel;
		UnityEngine_CoreModule::UnityEngine::CubemapFace m_CubeFace;
		int32_t m_DepthSlice;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::BuiltinRenderTextureType type);
		void _ctor(int32_t nameID);
		void _ctor(int32_t nameID, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubeFace, int32_t depthSlice);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubeFace, int32_t depthSlice);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Texture* tex);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Texture* tex, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubeFace, int32_t depthSlice);
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit(UnityEngine_CoreModule::UnityEngine::Rendering::BuiltinRenderTextureType type);
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit(int32_t nameID);
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit(UnityEngine_CoreModule::UnityEngine::Texture* tex);
		mscorlib::System::String* ToString();
		int32_t GetHashCode();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rhs);
		bool Equals(mscorlib::System::Object* obj);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier lhs, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier lhs, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rhs);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& lhs, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& lhs, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rhs);
}

