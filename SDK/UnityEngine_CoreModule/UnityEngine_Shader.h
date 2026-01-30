#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_DisableBatchingType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Shader : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Shader* Find(mscorlib::System::String* name);
		bool get_isSupported();
		static void set_globalRenderPipeline(mscorlib::System::String* value);
		static void EnableKeyword(mscorlib::System::String* keyword);
		static void DisableKeyword(mscorlib::System::String* keyword);
		UnityEngine_CoreModule::UnityEngine::DisableBatchingType get_disableBatching();
		static int32_t TagToID(mscorlib::System::String* name);
		static int32_t PropertyToID(mscorlib::System::String* name);
		static void SetGlobalFloatImpl(int32_t name, float value);
		static void SetGlobalVectorImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		static void SetGlobalTextureImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Texture* value);
		static void SetGlobalConstantBufferImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);
		static void SetGlobalFloat(mscorlib::System::String* name, float value);
		static void SetGlobalVector(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		static void SetGlobalVector(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		static void SetGlobalColor(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Color value);
		static void SetGlobalTexture(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Texture* value);
		static void SetGlobalTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Texture* value);
		static void SetGlobalConstantBuffer(int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);
		void _ctor();
		static void SetGlobalVectorImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector4& value);
	};
}

