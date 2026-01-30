#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_ShaderPropertyFlags.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Material : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void CreateWithShader(UnityEngine_CoreModule::UnityEngine::Material* self, UnityEngine_CoreModule::UnityEngine::Shader* shader);
		static void CreateWithMaterial(UnityEngine_CoreModule::UnityEngine::Material* self, UnityEngine_CoreModule::UnityEngine::Material* source);
		static void CreateWithString(UnityEngine_CoreModule::UnityEngine::Material* self);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Shader* shader);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Material* source);
		void _ctor(mscorlib::System::String* contents);
		UnityEngine_CoreModule::UnityEngine::Shader* get_shader();
		void set_shader(UnityEngine_CoreModule::UnityEngine::Shader* value);
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Texture* get_mainTexture();
		void set_mainTexture(UnityEngine_CoreModule::UnityEngine::Texture* value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mainTextureOffset();
		void set_mainTextureOffset(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mainTextureScale();
		void set_mainTextureScale(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		int32_t GetFirstPropertyNameIdByAttribute(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);
		bool HasProperty(int32_t nameID);
		bool HasProperty(mscorlib::System::String* name);
		void set_renderQueue(int32_t value);
		void EnableKeyword(mscorlib::System::String* keyword);
		void DisableKeyword(mscorlib::System::String* keyword);
		bool IsKeywordEnabled(mscorlib::System::String* keyword);
		bool get_enableInstancing();
		int32_t get_passCount();
		bool SetPass(int32_t pass);
		void CopyPropertiesFromMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		IL2CPP::Array<mscorlib::System::String*>* GetShaderKeywords();
		void SetShaderKeywords(IL2CPP::Array<mscorlib::System::String*>* names);
		IL2CPP::Array<mscorlib::System::String*>* get_shaderKeywords();
		void set_shaderKeywords(IL2CPP::Array<mscorlib::System::String*>* value);
		int32_t ComputeCRC();
		void SetFloatImpl(int32_t name, float value);
		void SetColorImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Color value);
		void SetMatrixImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void SetTextureImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Texture* value);
		void SetBufferImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value);
		void SetConstantBufferImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);
		float GetFloatImpl(int32_t name);
		UnityEngine_CoreModule::UnityEngine::Color GetColorImpl(int32_t name);
		UnityEngine_CoreModule::UnityEngine::Texture* GetTextureImpl(int32_t name);
		void SetFloatArrayImpl(int32_t name, IL2CPP::Array<float>* values, int32_t count);
		void SetMatrixArrayImpl(int32_t name, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* values, int32_t count);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);
		void SetTextureOffsetImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		void SetTextureScaleImpl(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector2 scale);
		void SetFloatArray(int32_t name, IL2CPP::Array<float>* values, int32_t count);
		void SetMatrixArray(int32_t name, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* values, int32_t count);
		void SetFloat(mscorlib::System::String* name, float value);
		void SetFloat(int32_t nameID, float value);
		void SetInt(mscorlib::System::String* name, int32_t value);
		void SetInt(int32_t nameID, int32_t value);
		void SetColor(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Color value);
		void SetColor(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Color value);
		void SetVector(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetVector(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetMatrix(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void SetMatrix(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void SetTexture(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Texture* value);
		void SetTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Texture* value);
		void SetBuffer(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value);
		void SetConstantBuffer(int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);
		void SetFloatArray(mscorlib::System::String* name, IL2CPP::Array<float>* values);
		void SetMatrixArray(mscorlib::System::String* name, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* values);
		float GetFloat(mscorlib::System::String* name);
		float GetFloat(int32_t nameID);
		UnityEngine_CoreModule::UnityEngine::Color GetColor(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Color GetColor(int32_t nameID);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetVector(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetVector(int32_t nameID);
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexture(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexture(int32_t nameID);
		void SetTextureOffset(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void SetTextureOffset(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void SetTextureScale(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void SetTextureScale(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetTextureOffset(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetTextureScale(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetTextureScale(int32_t nameID);
		void SetColorImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Color& value);
		void SetMatrixImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Matrix4x4& value);
		void GetColorImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Color& ret);
		void GetTextureScaleAndOffsetImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector4& ret);
		void SetTextureOffsetImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector2& offset);
		void SetTextureScaleImpl_Injected(int32_t name, UnityEngine_CoreModule::UnityEngine::Vector2& scale);
	};
}

