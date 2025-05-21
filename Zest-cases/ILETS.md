# IELTS_Pro Functionality Documentation

## Overview

This project, also referred to as "IELTS Ace," is a Next.js web application designed to help users practice and evaluate their IELTS skills with the help of AI. The core functionalities are described below, along with references to the main files implementing each feature.

---

## Core Features

### 1. AI Evaluation
- **Functionality**: Evaluates user responses for Writing and Speaking using AI (supports Reading and Listening automated checks).
- **Implementation**: Utilizes OpenAI's GPT-3.5-turbo or Google's Gemini API (see `src/ai/ai-instance.ts`).
- **Details**:
  - Provides band scores and feedback following IELTS criteria.
  - Gives suggestions for improvement and highlights strengths/weaknesses.

### 2. Test Interfaces
- **Functionality**: Interactive interfaces for each IELTS section (Reading, Writing, Listening, Speaking).
- **Implementation**: Primary UI in `src/app/` (e.g., `writing-test/page.tsx`, `resource-library/page.tsx`).
- **Details**:
  - **Reading**: Multiple passage types, various question formats; AI auto-evaluates answers.
  - **Writing**: Rich text editor, word count, test prompts, and AI evaluation.
  - **Listening**: Audio player, synchronized question interface.
  - **Speaking**: Voice recording and AI transcription/evaluation.

### 3. Performance Dashboard
- **Functionality**: Visualizes user performance and progress over time.
- **Implementation**: Dashboard and stats in `src/app/page.tsx` and related components.
- **Details**:
  - Displays band scores for each skill.
  - Shows strengths, weaknesses, and history.
  - Provides graphs and charts for performance tracking.

### 4. Resource Library
- **Functionality**: Offers study resources, vocabulary, grammar guides, and practice materials.
- **Implementation**: See `src/app/resource-library/page.tsx`.
- **Details**:
  - Categorized tabs for Vocabulary, Grammar, Practice Tests, and more.
  - Each resource includes titles, links, and brief descriptions.

### 5. User Progress Tracking
- **Functionality**: Tracks user performance and progress on various skills and tests.
- **Implementation**: Progress features in dashboard and possibly backend/API integration.
- **Details**:
  - Tracks historical performance.
  - Allows users to review past responses and scores.

---

## UI Components

- **Reusable Components**: The codebase contains various UI components (see `src/components/ui/`) such as:
  - `scroll-area.tsx`: Scrollable area containers.
  - `sheet.tsx`: Side panel/dialog management.
  - `menubar.tsx`: Top navigation menus.
- **Design Guidelines**: The app uses a teal (#008080) and gold (#FFD700) theme for calmness and highlight, with clean layouts and accessible fonts.

---

## AI Integration

- **Implementation**: AI model setup is handled in `src/ai/ai-instance.ts`.
  - Models supported: Google Gemini, OpenAI GPT, others possible.
  - API keys are required for AI providers.

---

## Documentation and Further Reading

- **Main Documentation**: See `README.md` for getting started.
- **Blueprint and Detailed Design**: See `docs/blueprint.md` for:
  - Core feature breakdowns.
  - Page/component descriptions.
  - Example AI prompts and evaluation criteria.
  - Style and UX guidelines.

---

## Example Structure (from docs/blueprint.md)

- Home/Landing Page
- Dashboard (performance visualization)
- Test Selection
- Test Pages (Reading, Writing, Listening, Speaking)
- Results & AI Feedback
- Progress Tracking
- Resource Library

---

## How to Add/Extend Functionality

1. **To add new test types or question formats**: Extend the relevant test page in `src/app/`, and connect to the AI evaluator in `src/ai/ai-instance.ts`.
2. **To add new resources**: Update arrays in `resource-library/page.tsx`.
3. **To modify AI feedback or criteria**: Adjust prompts and logic in AI integration files and serverless endpoints.

---
