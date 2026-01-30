#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_TextGenerationSettings.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct TextGenerationSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_TextGenerationError.h"
#include "UnityEngine_UIVertex.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_UICharInfo.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UICharInfo; };
#include "UnityEngine_UILineInfo.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UILineInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_FontStyle.h"
#include "UnityEngine_TextAnchor.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_HorizontalWrapMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_TextRenderingModule::UnityEngine
{
	struct TextGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		mscorlib::System::String* m_LastString;
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings m_LastSettings;
		bool m_HasGenerated;
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError m_LastValid;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* m_Verts;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UICharInfo>* m_Characters;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UILineInfo>* m_Lines;
		bool m_CachedVerts;
		bool m_CachedCharacters;
		bool m_CachedLines;
		void _ctor();
		void _ctor(int32_t initialCapacity);
		void Finalize();
		void System_IDisposable_Dispose();
		int32_t get_characterCountVisible();
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings ValidatedSettings(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings);
		void Invalidate();
		void GetCharacters(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UICharInfo>* characters);
		void GetLines(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UILineInfo>* lines);
		void GetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* vertices);
		float GetPreferredWidth(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings);
		float GetPreferredHeight(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings);
		bool PopulateWithErrors(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings, UnityEngine_CoreModule::UnityEngine::GameObject* context);
		bool Populate(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings);
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError PopulateWithError(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings);
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError PopulateAlways(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings);
		mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* get_verts();
		mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UICharInfo>* get_characters();
		mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UILineInfo>* get_lines();
		UnityEngine_CoreModule::UnityEngine::Rect get_rectExtents();
		int32_t get_characterCount();
		int32_t get_lineCount();
		static intptr_t Internal_Create();
		static void Internal_Destroy(intptr_t ptr);
		bool Populate_Internal(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::Font* font, UnityEngine_CoreModule::UnityEngine::Color color, int32_t fontSize, float scaleFactor, float lineSpacing, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t& error);
		bool Populate_Internal(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::Font* font, UnityEngine_CoreModule::UnityEngine::Color color, int32_t fontSize, float scaleFactor, float lineSpacing, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode verticalOverFlow, UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode horizontalOverflow, bool updateBounds, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 extents, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError& error);
		void GetVerticesInternal(mscorlib::System::Object* vertices);
		void GetCharactersInternal(mscorlib::System::Object* characters);
		void GetLinesInternal(mscorlib::System::Object* lines);
		void get_rectExtents_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		bool Populate_Internal_Injected(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::Font* font, UnityEngine_CoreModule::UnityEngine::Color& color, int32_t fontSize, float scaleFactor, float lineSpacing, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t& error);
	};
}

