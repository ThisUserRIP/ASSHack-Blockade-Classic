#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct MaterialPropertyBlock : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void SetFloatImpl(int32_t name, float value);
		void SetVectorImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetColorImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Color value);
		void SetTextureImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Texture* value);
		void SetFloatArrayImpl(int32_t name, IL2CPP::Array<float>* values, int32_t count);
		static intptr_t CreateImpl();
		static void DestroyImpl(intptr_t mpb);
		void Clear(bool keepMemory);
		void Clear();
		void SetFloatArray(int32_t name, IL2CPP::Array<float>* values, int32_t count);
		void _ctor();
		void Finalize();
		void Dispose();
		void SetFloat(mscorlib::System::String* name, float value);
		void SetInt(int32_t nameID, int32_t value);
		void SetVector(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetVector(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetColor(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Color value);
		void SetTexture(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Texture* value);
		void SetTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Texture* value);
		void SetFloatArray(mscorlib::System::String* name, IL2CPP::Array<float>* values);
		void SetVectorImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector4& value);
		void SetColorImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Color& value);
	};
}

